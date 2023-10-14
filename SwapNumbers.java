import java.util.Scanner;

public class SwapNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();

        System.out.println("Before swapping: num1 = " + num1 + ", num2 = " + num2);

        // Swap the numbers without using a temporary variable
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        //You can uncomment and try each set of different ways for swapping a number in java 
        //Using a Temporary variable:

        // int temp = num1;
        // num1 = num2;
        // num2 = temp;

        //Using arithmetic operators * and /:

        // num1 = num1 * num2;
        // num2 = num1 / num2;
        // num1 = num1 / num2;

        // Using bitwise XOR operator ^:

        // num1 = num1 ^ num2;
        // num2 = num1 ^ num2;
        // num1 = num1 ^ num2;

        
        System.out.println("After swapping: num1 = " + num1 + ", num2 = " + num2);
        scanner.close();
    }
}
