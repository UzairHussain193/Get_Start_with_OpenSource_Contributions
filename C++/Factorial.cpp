#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate and display the factorial
    int result = factorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
