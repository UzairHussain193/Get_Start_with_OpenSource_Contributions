import java.util.Scanner;

public class EvenOrOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if the number is even or odd
        if (number % 2 == 0) {
            // If the remainder is 0, it means the number is even
            System.out.println("The number is even.");
        } else {
            // If the remainder is not 0, it means the number is odd
            System.out.println("The number is odd.");
        }

        scanner.close();
    }
}
