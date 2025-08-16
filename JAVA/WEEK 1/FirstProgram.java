import java.lang.*;
class FirstProgram {
    public void bark(){
        System.out.println("bark");
    }
    public static void main(String[] args){
        System.out.println("Hello World!");
        FirstProgram dog = new FirstProgram();
        dog.bark();
    }
}