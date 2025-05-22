#include <stdio.h>

int main(void) {
    int a, o, x, sum = 0;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &a);

    o = a;  // Store the original number for comparison

    // Loop to calculate the sum of the cubes of each digit
    while (a != 0) {
        x = a % 10;           // Extract the last digit
        sum = sum + x * x * x; // Add the cube of the digit to the sum
        a = a / 10;           // Remove the last digit from the number
    }

    // Check if the sum of the cubes is equal to the original number
    if (o == sum) {
        printf("Armstrong number\n");  // If yes, it's an Armstrong number
    } else {
        printf("Not an Armstrong number\n");  // Otherwise, it's not
    }

    return 0;
}
