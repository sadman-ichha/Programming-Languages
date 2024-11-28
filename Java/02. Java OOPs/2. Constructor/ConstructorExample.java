class Bike{
    String name;
    int age;

    void show(){
        name= "Sadman ";
        age =23;
        System.out.println("Name:"+ name+ "Age: "+age);
    }

}


public class ConstructorExample{

    public static void main(String[] args) {
        Bike bike =new Bike();
        bike.show();
    }
    //
}