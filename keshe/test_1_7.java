package keshe;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;
import java.util.Random;


public class test_1_7 {
	public static void main(String[] args) {
		String[] arr = new String[100];
			try {
				File file=new File("D:\\java�γ����\\����100������.txt");
				Writer out = new FileWriter(file);
			for (int i = 0; i < arr.length; i++) {
				StringBuilder sb1= new  StringBuilder();
				for(int j=0;j<3;j++) {
					int num=(int)(Math.random()*10);
					char word=(char)(Math.random()*26+'A');
					sb1.append(num);
					sb1.append(word);
					}
				arr[i]=sb1.substring(0);
				}
			for (int i = 0; i < arr.length; i++) {
				out.write("��"+(i+1)+"���ܴa��"+arr[i]+"\r\n");
				}
				out.flush();
				out.close();
			} catch (IOException e) {
				// TODO �Զ����ɵ� catch ��
				e.printStackTrace();
		}
	}
}

