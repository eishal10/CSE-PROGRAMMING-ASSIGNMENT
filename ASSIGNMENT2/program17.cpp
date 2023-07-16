#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the series 1 to %d is: %lld\n", n, product);

    return 0;
}
