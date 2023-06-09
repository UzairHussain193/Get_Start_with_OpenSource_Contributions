#include <iostream>

int main() {
    int num1, num2, temp;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "After swapping, the first number is: " << num1 << std::endl;
    std::cout << "After swapping, the second number is: " << num2 << std::endl;

    return 0;
}
