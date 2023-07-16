#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u", &n);

    unsigned long long result = factorial(n);
    printf("Factorial of %u = %llu\n", n, result);

    return 0;
}
