#include <iostream>

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
    bool check = true;
    
    std::cout << "***Temperature Conversion Program***" << std::endl;
    std::cout << "Enter the temperature : ";
	std::cin >> temperature;
    
    do {
    	std::cout << std::endl;
	    std::cout << "Temperature Conversion Menu:" << std::endl;
	    std::cout << "1. Celsius to Fahrenheit" << std::endl;
	    std::cout << "2. Celsius to Kelvin" << std::endl;
	    std::cout << "3. Fahrenheit to Celsius" << std::endl;
	    std::cout << "4. Fahrenheit to Kelvin" << std::endl;
	    std::cout << "5. Kelvin to Celsius" << std::endl;
	    std::cout << "6. Kelvin to Fahrenheit" << std::endl;
	    std::cout << "7. Exit" << std::endl;
	
	    std::cout << "Enter your choice : ";
	    std::cin >> choice;
		
		while (choice < 1 || choice > 7) {
			std::cout << "Invalid choice! Please enter again: ";
			std::cin >> choice;
		}
	
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
	        case 7:
	        	check = false;
	        	break;
	    }
	}while (check == true);

    return 0;
}
