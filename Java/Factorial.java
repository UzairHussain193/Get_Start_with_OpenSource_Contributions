// Task 5: Factorial

// Prompt the user to enter a number.
// Use a loop (for or while) to calculate the factorial of the number.
// Multiply the current number by the factorial value and update it in each iteration.
// Print the factorial value.

import java.util.Scanner;

public class Factorial{
    public static void main(String[] args) {
     System.out.print("Please Enter the number you want the factorial of : "); 
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     System.out.println("The factorial of " + n + " is " + factorial(n));
    }   

    public static int factorial(int n){
        int factorial = 1;
        while(n>0){
           factorial=factorial*n;
           n--;
        }
        return factorial;
    }
}