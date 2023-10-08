import java.util.Scanner;

public class EvenOrOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = scanner.nextInt();

        String result = (num % 2 == 0) ? "even" : "odd";
        System.out.println(num + " is " + result + ".");

        scanner.close();
    }
}
