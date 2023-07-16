#include <stdio.h>

int main() {
    int n; // Number of times to repeat the series
    int i, j;

    printf("Enter the number of times to repeat the series: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
    }

    return 0;
}
