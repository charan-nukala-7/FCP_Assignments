//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 60) {
        printf("Division: First\n");
    } else if (average >= 50) {
        printf("Division: Second\n");
    } else {
        printf("Division: Third\n");
    }

    return 0;
}