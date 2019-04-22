interface Computer{
	public void computerPrint();
}
class SurfaceBookComputer implements Computer{
	public void computerPrint(){
		System.out.println("surfaceBook又薄又好看");
	}
}
class MacBookComputer implements Computer{
	public void computerPrint(){
		System.out.println("MacBook又快又好用");
	}
}
interface Factory{
	public Computer creatComputer();
}
class MsFactory implements Factory{
	public Computer creatComputer(){
		return new SurfaceBookComputer();
	}
}
class AppleFactory implements Factory{
	public Computer creatComputer(){
		return new MacBookComputer();
	}
}
class Client{
	public void Print(Computer computer){
		computer.computerPrint();
	}
	public static void main(String[] args){
		Client client = new Client();
		Factory factory = new AppleFactory();
		client.Print(factory.creatComputer());
	}
}