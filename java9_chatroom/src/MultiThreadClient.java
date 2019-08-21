

import java.io.IOException;
import java.io.PrintStream;

import java.net.Socket;
import java.util.Scanner;
import java.util.ServiceConfigurationError;

public class MultiThreadClient {
    public static void main(String[] args) throws Exception {
        Socket client = new Socket("127.0.0.1",6666);
        Thread readThread = new Thread(new ReadFromServer(client));
        Thread sendThread = new Thread(new SendMsgToServer(client));
        readThread.start();
        sendThread.start();
    }
}
class ReadFromServer implements Runnable{
    private Socket client;

    public ReadFromServer(Socket client) {
        this.client = client;
    }

    @Override
    public void run() {
        try {
            Scanner in = new Scanner(client.getInputStream());
            while (true) {
                if (client.isClosed()) {
                    System.out.println("客户端已经关闭");
                    in.close();
                    break;
                }
                if (in.hasNext()) {
                    String msgFromServer = in.nextLine();
                    System.out.println("服务器发来的信息为:" + msgFromServer);
                }
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }
}
class SendMsgToServer implements Runnable{
    private Socket client;

    public SendMsgToServer(Socket client) {
        this.client = client;
    }

    @Override
    public void run() {
        try {
            //获取输出流，向服务器发送信息
            PrintStream printStream =
                    new PrintStream(client.getOutputStream(), true, "UTF-8");
            Scanner in = new Scanner(System.in);
            while (true) {
                String strFromUser = "";
                if (in.hasNext()) {
                    strFromUser = in.nextLine();
                }
                printStream.println(strFromUser);
                if (strFromUser.contains("byebye")) {
                    System.out.println("客户端退出聊天室");
                    printStream.close();
                    in.close();
                    client.close();
                    break;
                }
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }
}
