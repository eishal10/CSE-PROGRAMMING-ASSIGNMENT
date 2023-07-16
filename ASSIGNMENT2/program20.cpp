#include <stdio.h>

int main() {
    int numTerms;
    long long int currentTerm = 2;
    
    printf("Enter the number of terms to display: ");
    scanf("%d", &numTerms);
    
    printf("Series: ");
    for (int i = 0; i < numTerms; i++) {
        printf("%lld ", currentTerm);
        currentTerm = currentTerm * currentTerm;
    }
    
    return 0;
}
