package factory;

interface IFruit {
    void eat();
}

class Apple implements IFruit {
    public void eat() {
        System.out.println("吃苹果");
    }
}

class Banana implements IFruit {
    public void eat() {
        System.out.println("吃香蕉");
    }
}

class Orange implements IFruit {
    public void eat() {
        System.out.println("吃橘子");
    }
}

class Factory {
    public static IFruit factory(String str) {
        IFruit fruit = null;
        try {
            fruit = (IFruit) Class.forName(str).newInstance();
        } catch (InstantiationException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
        return fruit;
    }
}

public class ReflectFactory {
    //反射vs工厂模式
    //传统的工厂模式比较繁琐，每增加一个接口的子类就需要修改工厂类，
    //如果想要解决new关键字带来的问题最好的做法就是使用反射来解决问题。
    public static void main(String[] args) {
        IFruit fruit = Factory.factory("factory.Orange");
        fruit.eat();
        //使用反射的话，需要添加接口类的子类并不需要修改工厂类
    }
}
