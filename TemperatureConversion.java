import java.util.Scanner;

public class TemperatureConversion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Temperature Conversion Menu:");
        System.out.println("1. Celsius to Fahrenheit");
        System.out.println("2. Fahrenheit to Celsius");
        System.out.println("3. Celsius to Kelvin");
        System.out.println("4. Kelvin to Celsius");
        System.out.print("Enter your choice (1/2/3/4): ");
        int choice = scanner.nextInt();

        double temperature, convertedTemperature;

        switch (choice) {
            case 1:
                System.out.print("Enter temperature in Celsius: ");
                temperature = scanner.nextDouble();
                convertedTemperature = (temperature * 9/5) + 32;
                System.out.println("Temperature in Fahrenheit: " + convertedTemperature + " °F");
                break;
            case 2:
                System.out.print("Enter temperature in Fahrenheit: ");
                temperature = scanner.nextDouble();
                convertedTemperature = (temperature - 32) * 5/9;
                System.out.println("Temperature in Celsius: " + convertedTemperature + " °C");
                break;
            case 3:
                System.out.print("Enter temperature in Celsius: ");
                temperature = scanner.nextDouble();
                convertedTemperature = temperature + 273.15;
                System.out.println("Temperature in Kelvin: " + convertedTemperature + " K");
                break;
            case 4:
                System.out.print("Enter temperature in Kelvin: ");
                temperature = scanner.nextDouble();
                convertedTemperature = temperature - 273.15;
                System.out.println("Temperature in Celsius: " + convertedTemperature + " °C");
                break;
            default:
                System.out.println("Invalid choice. Please select a valid option.");
        }

        scanner.close();
    }
}
