import javax.print.attribute.standard.RequestingUserName;
import java.io.IOException;
import java.io.PrintStream;
import java.lang.reflect.ParameterizedType;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MultiThreadServer {
    private static Map<String, Socket> clientLists =
            new ConcurrentHashMap<>();
    private static class ExecuteClientRequest implements Runnable{
        private Socket client;

        public ExecuteClientRequest(Socket client) {
            this.client = client;
        }

        @Override
        public void run() {
            try {
                Scanner in = new Scanner(client.getInputStream());
                String strFromClient = "";
                while (true) {
                    if (in.hasNext()) {
                        strFromClient = in.nextLine();
                        Pattern pattern = Pattern.compile("\r");
                        Matcher matcher = pattern.matcher(strFromClient);
                        strFromClient = matcher.replaceAll("");
                    }
                    if (strFromClient.startsWith("username:")) {
                        String username = strFromClient.split("\\:")[1];
                        userRegister(username,client);
                    }
                    if (strFromClient.startsWith("G:")) {
                        String groupMsg = strFromClient.split("\\:")[1];
                        groupChat(groupMsg);
                    }
                    if (strFromClient.startsWith("P:")) {
                        String username = strFromClient.split("\\:")[1].split("\\-")[0];
                        String privateMsg = strFromClient.split("\\:")[1].split("\\-")[1];
                        privateChat(username,privateMsg);
                    }
                    if (strFromClient.contains("byebye")) {
                        String username = strFromClient.split("\\:")[0];
                        userOffLine(username);
                        break;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }

        }
        private void userRegister(String userName,Socket socket){
            clientLists.put(userName,socket);
            System.out.println("用户"+ userName+"上线了");
            System.out.println("当前聊天室人数为"+clientLists.size());
            try{
                PrintStream out =
                        new PrintStream(socket.getOutputStream(),true,"UTF-8");

            }catch (IOException e){
                e.printStackTrace();
            }
        }
        private void groupChat(String groupMsg){
            //遍历map，向每个客户端输出
            Set<Map.Entry<String,Socket>> clientEntry =
                    clientLists.entrySet();
            Iterator<Map.Entry<String,Socket>> iterator =
                    clientEntry.iterator();
            while(iterator.hasNext()){
                Map.Entry<String,Socket> client =
                        iterator.next();
                PrintStream out = null;
                try {
                    out = new PrintStream(client.getValue().getOutputStream(),true,"UTF-8");
                } catch (IOException e) {
                    e.printStackTrace();
                }
                out.println("群聊信息为"+groupMsg);
            }
        }
        private void privateChat(String username,String privateMsg){
            Socket client = clientLists.get(username);
            PrintStream out = null;
            try {
                out = new PrintStream(client.getOutputStream(),true,"UTF-8");
                out.println("私聊信息为"+privateMsg);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        private void userOffLine(String username){
            //删除map中的用户实体
            clientLists.remove(username);
            System.out.println("用户"+ username + "已下线");
            System.out.println("当前聊天室人数为"+clientLists.size());

        }
    }
    public static void main(String[] args) throws Exception {
        ServerSocket serverSocket = new ServerSocket(6666);
        //使用线程池来同时处理多个客户端连接
        ExecutorService executorService = Executors.newFixedThreadPool(20);
        System.out.println("等待客户端连接");
        for(int i = 0; i < 20; i++){
            Socket client = serverSocket.accept();
            System.out.println("有新的客户端连接，端口号为"+client.getPort());
            executorService.submit(new ExecuteClientRequest(client));
        }
        //关闭线程池与客户端
        executorService.shutdown();
        serverSocket.close();
    }
}
