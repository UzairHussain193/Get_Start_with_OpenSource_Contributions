#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9.0 / 5.0) - 459.67;
}

int main() {
    int choice;
    double temperature;

    std::cout << "Temperature Conversion Menu:" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Celsius to Kelvin" << std::endl;
    std::cout << "3. Fahrenheit to Celsius" << std::endl;
    std::cout << "4. Fahrenheit to Kelvin" << std::endl;
    std::cout << "5. Kelvin to Celsius" << std::endl;
    std::cout << "6. Kelvin to Fahrenheit" << std::endl;

    std::cout << "Enter your choice (1-6): ";
    std::cin >> choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    switch (choice) {
        case 1:
            std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << std::endl;
            break;
        case 2:
            std::cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << std::endl;
            break;
        case 3:
            std::cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << std::endl;
            break;
        case 4:
            std::cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << std::endl;
            break;
        case 5:
            std::cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << std::endl;
            break;
        case 6:
            std::cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}
