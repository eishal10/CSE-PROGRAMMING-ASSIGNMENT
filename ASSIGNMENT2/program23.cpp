#include <stdio.h>

void fibonacciSeries(int n) {
    int first = 1, second = 1, next, i;

    printf("Fibonacci Series: %d %d ", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of terms should be greater than 0.");
        return 0;
    }

    fibonacciSeries(n);

    return 0;
}
