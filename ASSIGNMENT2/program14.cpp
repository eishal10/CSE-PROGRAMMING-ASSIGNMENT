#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
        sum += 2 * i - 1;
    }

    printf("\nSum of the first %d odd natural numbers = %d\n", n, sum);

    return 0;
}
