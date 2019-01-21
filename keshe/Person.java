package keshe;


public class Person implements Humman {

	public void eat() {
		System.out.println("正在吃");
	}
	public void sleep() {
		System.out.println("正在睡觉");
	}
	public void breathe() {
		System.out.println("正在呼吸");
	}
	public void think() {
		System.out.println("正在思考");
	}
	public void learn() {
		System.out.println("正在学习");
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
