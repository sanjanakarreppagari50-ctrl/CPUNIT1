#include <stdio.h>

int main() {
    int integerValue;
    printf("Enter an integer: ");
    scanf("%d", &integerValue);
    printf("You entered integer: %d\n", integerValue);

    //float
    float floatValue;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatValue);
    printf("You entered float: %.2f\n", floatValue); 

    // Double
    double doubleValue;
    printf("Enter a double-precision floating-point number: ");
    scanf("%lf", &doubleValue);
    printf("You entered double: %lf\n", doubleValue);

    // Character
    char charValue;
    printf("Enter a character: ");
    scanf(" %c", &charValue); 
    printf("You entered character: %c\n", charValue);

    // String (character array)
    char stringValue[50]; 
    printf("Enter a string (without spaces): ");
    scanf("%s", stringValue); 
    printf("You entered string: %s\n", stringValue);

    return 0;
}