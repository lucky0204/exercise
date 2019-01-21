package keshe;

import java.io.IOException;
import java.util.Scanner;
public class test_3 {
	public void test(char[] x,int y) throws MyException{
		if(x.length==0) {
			throw new MyException("输入错误，请输入一个17位的数字！");
		}
		for (int i = 0; i < x.length; i++) {
			if((x[i]>='0'&&x[i]<='9')&&(y==17))
			;
		else 
			throw new MyException("输入错误，请输入一个17位的数字！");
		}
	}
	public static int Sum(int[] x,int[] y) {
		int sum = 0;
		for(int i=0; i<x.length;i++){
			sum = sum+x[i]*y[i];//表达式
		}
		return sum%11;
	}
	public static void main(String[] args){
		test_3 t = new test_3();
		int sum=0;
		int[] w = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//校验系数
		char[] v = {'1','0','x','9','8','7','6','5','4','3','2'};//校验查询
		Scanner scan = new Scanner(System.in);//创建scan对象
		System.out.println("请输入您的身份证前17位：>");		
		String s = scan.nextLine();
		char[] a=new char[s.length()];//创建校验数组
		int[] id = new int[17];
		for(int i=0;i<s.length();i++) {
			a[i]=s.charAt(i);//用于校验的数组   
		}
		int al = a.length;
			try {
			t.test(a,al); 
			for(int i=0; i<a.length; i++) {
			id[i] = Integer.parseInt(s.substring(i, i + 1));// 将String类型的数字一个一个转换成int型
			}
			int y = Sum(id,w);
			System.out.println("您的身份证校验位是"+v[y]);
		} 
		catch (MyException e) {
			// TODO 自动生成的 catch 块
			e.printStackTrace();
		}
	}
}
