#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;  //  Return the result
}

int main(void) {
    int x, j, o, a, sum = 0;

    // Prompt the user for input
    printf("Enter the number: ");
    scanf("%d", &x);

    o = x; // Store original number for comparison

    // Calculate the sum of factorials of digits
    while (x != 0) {
        a = x % 10;                   // Extract last digit
        sum = sum + factorial(a);     // Add its factorial to sum
        x = x / 10;                   // Remove last digit
    }

    // Check if the number is a strong number
    if (sum == o) {
        printf("It's a strong number\n");
    } else {
        printf("It's not a strong number\n");
    }

    return 0;
}