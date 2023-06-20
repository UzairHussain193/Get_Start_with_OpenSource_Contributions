#include <stdio.h>

void fibonacciSeries(int terms) {
    int first = 0, second = 1;
    printf("Fibonacci series up to %d terms:\n", terms);

    for (int i = 0; i < terms; i++) {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacciSeries(terms);

    return 0;
}
