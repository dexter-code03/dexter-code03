import java.util.Scanner;

class Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Welcome To Calculator");
        System.out.println("Please Enter First Number: ");
        int num1 = input.nextInt();
        System.out.println("Now,Enter Second Number: ");
        int num2 = input.nextInt();
        int ans = num1+num2;
        System.out.println("Sum of "+num1+" and "+num2+" is: "+ans);
    }
}
