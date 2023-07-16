#include <stdio.h>

int main() {
    int number, reverse = 0, temp;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    temp = number;
    
    // Reverse the number
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    printf("Reverse of the number: %d\n", reverse);
    
    // Check if the number is a palindrome
    if (number == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    
    return 0;
}
