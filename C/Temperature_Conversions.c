#include <stdio.h>

const double ABSOLUTE_ZERO_CELSIUS = 273.15;
const double ABSOLUTE_ZERO_FAHRENHEIT = 459.67;

double celsiusToFahrenheit(double celsius) {
    return ((celsius * 9.0 / 5.0) + 32.0);
}

double celsiusToKelvin(double celsius) {
    return (celsius + ABSOLUTE_ZERO_CELSIUS);
}

double fahrenheitToCelsius(double fahrenheit) {
    return ((fahrenheit - 32.0) * 5.0 / 9.0);
}

double fahrenheitToKelvin(double fahrenheit) {
    return ((fahrenheit + ABSOLUTE_ZERO_FAHRENHEIT) * 5.0 / 9.0);
}

double kelvinToCelsius(double kelvin) {
    return (kelvin - ABSOLUTE_ZERO_CELSIUS);
}

double kelvinToFahrenheit(double kelvin) {
    return ((kelvin * 9.0 / 5.0) - ABSOLUTE_ZERO_FAHRENHEIT);
}

int main() {
    int choice;
    double temperature;
    int check = 1;

    printf("***Temperature Conversion Program***\n");
    printf("Enter the temperature : ");
    scanf("%lf", &temperature);

    do {
        printf("\n");
        printf("Temperature Conversion Menu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Fahrenheit to Celsius\n");
        printf("4. Fahrenheit to Kelvin\n");
        printf("5. Kelvin to Celsius\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        while (choice < 1 || choice > 7) {
            printf("Invalid choice! Please enter again: ");
            scanf("%d", &choice);
        }

        switch (choice) {
            case 1:
                printf("Temperature in Fahrenheit: %lf\n", celsiusToFahrenheit(temperature));
                break;
            case 2:
                printf("Temperature in Kelvin: %lf\n", celsiusToKelvin(temperature));
                break;
            case 3:
                printf("Temperature in Celsius: %lf\n", fahrenheitToCelsius(temperature));
                break;
            case 4:
                printf("Temperature in Kelvin: %lf\n", fahrenheitToKelvin(temperature));
                break;
            case 5:
                printf("Temperature in Celsius: %lf\n", kelvinToCelsius(temperature));
                break;
            case 6:
                printf("Temperature in Fahrenheit: %lf\n", kelvinToFahrenheit(temperature));
                break;
            case 7:
                check = 0;
                break;
        }
    } while (check == 1);

    return 0;
}
