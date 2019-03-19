interface USB{
	public void setup();
	public void work();
}
class Computer{
	public void plugin(USB usb){
		usb.setup();
		usb.work();
	}
}
class UDisk implements USB{
	public void setup(){
		System.out.println("u盘正在安装");
	}
	public void work(){
		System.out.println("u盘正在使用");
	}
}
class PrintDisk implements USB{
	public void setup(){
		System.out.println("打印机正在安装");
	}
	public void work(){
		System.out.println("打印机正在使用");
	}
}
class Test{
	public static void main(String[] args){
		Computer com = new Computer();
		com.plugin(new UDisk());
		com.plugin(new PrintDisk());
		
	}
}

