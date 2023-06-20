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
    sc.close();
    }   

    public static int factorial(int n){
        int factorial = 1; //Start from 1
        while(n>0){  //Run the loop as long as n is not 0 
           factorial=factorial*n;  //multiply n with the factorial variable
           n--; //decrease value of n
        }
        return factorial;
    }
}