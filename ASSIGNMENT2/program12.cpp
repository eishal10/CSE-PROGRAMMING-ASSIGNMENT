#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Cube of natural numbers up to %d:\n", N);

    for (i = 1; i <= N; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }

    return 0;
}
