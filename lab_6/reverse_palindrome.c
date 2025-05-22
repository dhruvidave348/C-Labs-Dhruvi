#include <stdio.h>

int main(void) {
    int n, x, r = 0, o;

    // Ask the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Store the original number for comparison later
    o = n;

    // Reverse the number using a loop
    while (n != 0) {
        x = n % 10;        // Get the last digit
        r = r * 10 + x;    // Build the reversed number
        n = n / 10;        // Remove the last digit
    }

    // Compare the reversed number with the original
    if (o == r) {
        printf("It is a palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
