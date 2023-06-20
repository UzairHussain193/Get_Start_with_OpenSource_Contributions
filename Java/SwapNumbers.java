// Task 3: Swap Two Numbers
// Write a program that takes two numbers as input and swaps their values.

import java.util.Scanner;

public class SwapNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter two numbers
        System.out.print("Enter the first number: ");
        int number1 = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int number2 = scanner.nextInt();

        // Print the original values
        System.out.println("Before swapping:");
        System.out.println("First number: " + number1);
        System.out.println("Second number: " + number2);

        // Swap the numbers
        int temp = number1;
        number1 = number2;
        number2 = temp;

        // Print the swapped values
        System.out.println("After swapping:");
        System.out.println("First number: " + number1);
        System.out.println("Second number: " + number2);
        
        scanner.close();
    }
}
