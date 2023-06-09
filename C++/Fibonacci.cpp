#include <iostream>

void fibonacciSeries(int terms) {
    int first = 0, second = 1;
    std::cout << "Fibonacci series up to " << terms << " terms:" << std::endl;

    for (int i = 0; i < terms; i++) {
        std::cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    int terms;

    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    fibonacciSeries(terms);

    return 0;
}
