#include <stdio.h>

int main() {
    int num1, num2;
    int sum, sub, mult, mod;
    float div; // Use float for division to handle decimal results

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2; // Modulus operator works only with integers

    // Division requires careful handling to avoid integer division issues
    // Typecast one of the operands to float to get a floating-point result
    div = (float)num1 / num2; 

    // Print the results
    printf("\nResults:\n");
    printf("Addition (Sum): %d\n", sum);
    printf("Subtraction (Difference): %d\n", sub);
    printf("Multiplication (Product): %d\n", mult);
    printf("Division (Quotient): %.2f\n", div); // Print division with 2 decimal places
    printf("Modulus (Remainder): %d\n", mod);

    return 0;
}