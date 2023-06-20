// Task 7: Prime Number
// Prompt the user to enter a number.
// Use a loop to check if the number is divisible by any number from 2 to its square root.
// If it is divisible by any number, it is not prime; otherwise, it is prime.
// Print the result.

import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        

        // complete this program.
        for(int i = 2; i<number;i++) {
        	if(number%i==0) {
        		System.out.println(number+" is not a prime number");
        		return;
        	}
        }
        
        System.out.println(number + " is a prime number");

        scanner.close();
    }
}
