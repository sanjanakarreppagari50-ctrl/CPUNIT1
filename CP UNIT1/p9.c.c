#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5; 
    int total_marks;
    float percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &m3);
    printf("Enter marks for Subject 4: ");
    scanf("%d", &m4);
    printf("Enter marks for Subject 5: ");
    scanf("%d", &m5);
	
    total_marks = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage (assuming maximum marks for each subject is 100)
    percentage = (float)total_marks / 500 * 100;

    // Display total marks and percentage
    printf("\nTotal Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35 && percentage >= 50) {
        printf("Result: Pass\n");
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 80) {
            printf("Grade: B\n");
        } else if (percentage >= 70) {
            printf("Grade: C\n");
        } else if (percentage >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: E\n");
        }
    } else {
        printf("Result: Fail\n");
        printf("Grade: F\n");
    }

    return 0;
}