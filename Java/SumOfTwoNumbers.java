// Task 2: Table of Two Numbers
// Write a program that takes two numbers as input and prints their sum.

import java.util.Scanner;

public class SumOfTwoNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter two numbers
        System.out.print("Enter the first number: ");
        int number1 = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int number2 = scanner.nextInt();

        // Calculate the sum of the two numbers
        int sum = number1 + number2;

        // Print the sum
        System.out.println("The sum of the two numbers is: " + sum);
    }
}
