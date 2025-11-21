#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 0) {
        printf("First number (%d) is positive.\n", num1);
        if (num2 > 0) {
            printf("Second number (%d) is also positive.\n", num2);
        } else {
            printf("Second number (%d) is not positive (it's zero or negative).\n", num2);
        }
    } else {
        printf("First number (%d) is not positive (it's zero or negative.\n", num1);
        if (num2 > 0) {
            printf("However, the second number (%d) is positive.\n", num2);
        } else {
            printf("And the second number (%d) is also not positive.\n", num2);
        }
    }

    return 0;
}