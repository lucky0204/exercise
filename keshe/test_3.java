package keshe;

import java.io.IOException;
import java.util.Scanner;
public class test_3 {
	public void test(char[] x,int y) throws MyException{
		if(x.length==0) {
			throw new MyException("�������������һ��17λ�����֣�");
		}
		for (int i = 0; i < x.length; i++) {
			if((x[i]>='0'&&x[i]<='9')&&(y==17))
			;
		else 
			throw new MyException("�������������һ��17λ�����֣�");
		}
	}
	public static int Sum(int[] x,int[] y) {
		int sum = 0;
		for(int i=0; i<x.length;i++){
			sum = sum+x[i]*y[i];//���ʽ
		}
		return sum%11;
	}
	public static void main(String[] args){
		test_3 t = new test_3();
		int sum=0;
		int[] w = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//У��ϵ��
		char[] v = {'1','0','x','9','8','7','6','5','4','3','2'};//У���ѯ
		Scanner scan = new Scanner(System.in);//����scan����
		System.out.println("�������������֤ǰ17λ��>");		
		String s = scan.nextLine();
		char[] a=new char[s.length()];//����У������
		int[] id = new int[17];
		for(int i=0;i<s.length();i++) {
			a[i]=s.charAt(i);//����У�������   
		}
		int al = a.length;
			try {
			t.test(a,al); 
			for(int i=0; i<a.length; i++) {
			id[i] = Integer.parseInt(s.substring(i, i + 1));// ��String���͵�����һ��һ��ת����int��
			}
			int y = Sum(id,w);
			System.out.println("�������֤У��λ��"+v[y]);
		} 
		catch (MyException e) {
			// TODO �Զ����ɵ� catch ��
			e.printStackTrace();
		}
	}
}
