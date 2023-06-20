// Explanation of the algorithm:

// Prompt the user to enter a number.
// Use the modulus operator % to check if the number is divisible by 2.
// If the remainder is 0 (i.e., number % 2 == 0), it means the number is even.
// Print a message indicating that the number is even.
// Otherwise, if the remainder is not 0 (i.e., number % 2 != 0), it means the number is odd.
// Print a message indicating that the number is odd.
// These comments help explain the logic behind the algorithm and how it determines whether a number is even or odd.



import java.util.Scanner;

public class EvenOrOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        // Prompt the user to enter a number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if the number is even or odd
        if (number % 2 == 0) {
            System.out.println("The number is even.");
        } else {
            System.out.println("The number is odd.");
        }
        scanner.close();
    }
}
