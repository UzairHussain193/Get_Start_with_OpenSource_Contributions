// Task 6: Fibonacci Series
// Prompt the user to enter the number of terms in the series.
// Initialize two variables with the first two Fibonacci numbers (0 and 1).
// Use a loop to generate the remaining Fibonacci numbers.
// Print the Fibonacci series.

import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the number of terms
        System.out.print("Enter the number of terms in the Fibonacci series: ");
        int numTerms = scanner.nextInt();

        int firstTerm = 0;
        int secondTerm = 1;

        // Print the first two terms of the series
        System.out.print("Fibonacci Series: " + firstTerm + ", " + secondTerm);

        // Generate the remaining terms of the series
        for (int i = 3; i <= numTerms; i++) {
            int nextTerm = firstTerm + secondTerm;
            System.out.print(", " + nextTerm);

            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

        System.out.println();
        scanner.close();
    }
}
