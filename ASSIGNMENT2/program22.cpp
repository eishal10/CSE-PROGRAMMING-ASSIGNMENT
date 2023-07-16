#include <stdio.h>

void displaySeries(int n) {
    int i, j;
    int count = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The series is: ");
    displaySeries(n);

    return 0;
}
