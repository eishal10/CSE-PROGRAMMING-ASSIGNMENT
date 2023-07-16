#include <stdio.h>

int main() {
    int number, sum = 0;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    if (number >= 1000 && number <= 9999) {
        sum += number % 10;         // add the last digit
        sum += (number / 10) % 10;  // add the third digit
        sum += (number / 100) % 10; // add the second digit
        sum += number / 1000;       // add the first digit
        
        printf("Sum of digits: %d\n", sum);
    } else {
        printf("Invalid input! Please enter a 4-digit number.\n");
    }
    
    return 0;
}






