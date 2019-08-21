import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.util.Scanner;

public class SingleThreadClient {
    public static void main(String[] args) throws Exception {
        //建立链接
        Socket socket = new Socket("127.0.0.1",6666);
        Scanner scanner = new Scanner(socket.getInputStream());
        if(scanner.hasNext()){
            System.out.println("从服务器发来的信息为"+scanner.nextLine());
        }
        PrintStream printStream = new PrintStream(socket.getOutputStream(),true,"UTF-8");
        Scanner in = new Scanner(System.in);
        String str = "";
        if(in.hasNext()){
            str = in.nextLine();
        }
        printStream.println(str);
        printStream.println("hello i am Client");


        printStream.close();
        scanner.close();
        socket.close();
    }
}
