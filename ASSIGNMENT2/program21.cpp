#include <stdio.h>

int main() {
    int term = 2;
    int count = 1;

    printf("Series: ");

    while (count <= 10) {  // Adjust the number of terms as needed
        printf("%d ", term);
        term *= 2;
        count++;
    }

    printf("\n");

    return 0;
}
