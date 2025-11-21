#include <stdio.h>

int main() {
    int n; 
    int sum = 0; 
    int i = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
	
    do {
        sum += i; 
        i++;     
    } while (i <= n);

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}