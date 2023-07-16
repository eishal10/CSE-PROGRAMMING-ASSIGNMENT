#include <stdio.h>

int main() {
    float income, taxableIncome, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    taxableIncome = income - 150000; // Subtracting the exemption amount

    if (taxableIncome <= 0) {
        printf("No tax.\n");
    } else if (taxableIncome <= 150000) {
        tax = taxableIncome * 0.1; // 10% tax
    } else if (taxableIncome <= 300000) {
        tax = 15000 + (taxableIncome - 150000) * 0.2; // 20% tax
    } else if (taxableIncome <= 500000) {
        tax = 45000 + (taxableIncome - 300000) * 0.3; // 30% tax
    } else {
        tax = 105000 + (taxableIncome - 500000) * 0.4; // 40% tax
    }

    printf("Tax payable: %.2f\n", tax);

    return 0;
}
