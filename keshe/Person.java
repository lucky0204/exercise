package keshe;


public class Person implements Humman {

	public void eat() {
		System.out.println("���ڳ�");
	}
	public void sleep() {
		System.out.println("����˯��");
	}
	public void breathe() {
		System.out.println("���ں���");
	}
	public void think() {
		System.out.println("����˼��");
	}
	public void learn() {
		System.out.println("����ѧϰ");
	}
	public static void main(String[] args) {
		Person per=new Person();
		per.breathe();
		per.eat();
		per.sleep();
		per.think();
		per.learn();
	}
}
