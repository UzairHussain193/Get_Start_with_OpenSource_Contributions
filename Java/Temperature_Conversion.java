// Task 10: Temperature_Conversion

// Create a menu-driven interface using loops and switch statements.
// Prompt the user to choose the temperature scale (Celsius, Fahrenheit, or Kelvin).
// Depending on the user's choice, prompt for the temperature value and convert it to the other scales using the conversion formulas.
// Print the converted temperature values.

import java.util.Scanner;

public class Temperature_Conversion{
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int choice;
        while(true){
            System.out.println("Please choose the temperature scale you want to convert from: ");
            
            System.out.println("1. Celsius to Fahrenhiet");
            System.out.println("2. Celsius to Kelvin");

            System.out.println("3. Fahrenheit to Celsius");
            System.out.println("4. Fahrenheit to kelvin");
            
            System.out.println("5. Kelvin to Celsius");
            System.out.println("6. Kelvin to Fahrenheit");
            
            System.out.println("0. Exit");
            

            choice = sc.nextInt();
            switch(choice){
                case 1: Celsius_To_Fahrenhiet();
                        break;
                case 2: Celsius_To_Kelvin();
                        break;

                case 3: Fahrenheit_To_Celsius();
                        break;
                case 4: Fahrenheit_To_Kelvin();
                        break;
                
                case 5: Kelvin_To_Celsius();
                        break;
                case 6: Kelvin_To_Fahrenheit();
                        break;


                case 0: System.exit(0);
                        break;
                default: System.out.println("Invalid choice");
                        break;
            }
            sc.next();
        }
    }

 

 
    private static void Celsius_To_Kelvin() {
        System.out.println("Please enter the temperature in Celsius: ");
        double Celsius = sc.nextDouble();
        double Kelvin = Celsius+273.15;
        System.out.println("The temperature in Kelvin is: " + Kelvin);
    }

    public static void Celsius_To_Fahrenhiet(){
        System.out.println("Please enter the temperature in Celsius: ");
        double Celsius = sc.nextDouble();
        double Fahrenheit = (Celsius*9/5)+32;
        System.out.println("The temperature in Fahrenheit is: " + Fahrenheit);
    }

    private static void Fahrenheit_To_Celsius() {
        System.out.println("Please enter the temperature in Fahrenheit: ");
        double Fahrenheit = sc.nextDouble();
        double Celsius = (Fahrenheit-32)*5/9;
        System.out.println("The temperature in Celsius is: " + Celsius);
    }

    private static void Fahrenheit_To_Kelvin() {
        System.out.println("Please enter the temperature in Fahrenheit: ");
        double Fahrenheit = sc.nextDouble();
        double Kelvin = (Fahrenheit-32)*5/9+273.15;
        System.out.println("The temperature in Kelvin is: " + Kelvin);
    }

    private static void Kelvin_To_Celsius() {
        System.out.println("Please enter the temperature in Kelvin: ");
        double Kelvin = sc.nextDouble();
        double Celsius = Kelvin-273.15;
        System.out.println("The temperature in Celsius is: " + Celsius);
    }
    
    private static void Kelvin_To_Fahrenheit() {
        System.out.println("Please enter the temperature in Kelvin: ");
        double Kelvin = sc.nextDouble();
        double Fahrenheit = (Kelvin-273.15)*9/5+32;
        System.out.println("The temperature in Fahrenheit is: " + Fahrenheit);
    }

}