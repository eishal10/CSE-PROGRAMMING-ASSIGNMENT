#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    // Read numbers from the keyboard
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Add the number to the sum
        sum += numbers[i];
    }

    average = (float)sum / SIZE;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
