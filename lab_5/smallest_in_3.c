#include <stdio.h>

int main(void) {
    int a, b, c;

    // Prompt and read the first number
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Prompt and read the second number
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Prompt and read the third number
    printf("Enter the third number: ");
    scanf("%d", &c);

    // Compare all three numbers to find the greatest
    if (a > b && a > c) {
        // If 'a' is greater than both 'b' and 'c'
        printf("%d is the greatest\n", a);
    } else if (b > a && b > c) {
        // If 'b' is greater than both 'a' and 'c'
        printf("%d is the greatest\n", b);
    } else if (a == b && b == c) {
        // If all three numbers are equal
        printf("All of them are equal\n");
    } else {
        // If neither 'a' nor 'b' is greatest, then 'c' must be the greatest
        printf("%d is the greatest\n", c);
    }

    return 0; // End of program
}
