#include <stdio.h>

int main() {
    int userInput; // Declare an integer variable to store the input

    // Prompt the user to enter a value
    printf("Please enter an integer: ");

    // Read the integer input from the user and store it in 'userInput'
    // The '&' before 'userInput' provides the memory address of the variable
    scanf("%d", &userInput);

    // Print the value received from the user
    printf("You entered: %d\n", userInput);

    return 0;
}
