#include <stdio.h>

int main() {
    int n, sum = 0;

    // Compute the sum of the first 10 natural numbers
    for (n = 1; n <= 10; n++) {
        sum += n;
    }

    printf("The sum of the first 10 natural numbers is: %d\n", sum);

    return 0;
}