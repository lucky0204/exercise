import java.util.Date;

public class Reflect{
    public static void main(String[] args)  {
        //三种获取Class对象的方法
        //1.通过类.class获取
        Class<Date> cls = Date.class;
        System.out.println(cls);
        System.out.println("----------------------------");
        //2.通过对象的getClass()方法来获取Class对象
        Date date = new Date();
        System.out.println(date.getClass());
        //3.通过Class类提供的forName()方法来获取Class对象
        try {
            System.out.println(Class.forName("java.util.Date"));
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}