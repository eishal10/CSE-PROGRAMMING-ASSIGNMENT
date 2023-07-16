#include <stdio.h>

int main() {
    int marks[5];
    int maxMarks = 500;
    float totalMarks = 0.0;
    float percentage;
    char grade;

    printf("Enter marks obtained in five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    percentage = (totalMarks / maxMarks) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}




