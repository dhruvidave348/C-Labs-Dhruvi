#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c, y;
    float D, x1, x2;

    printf("enter the coefficient of x2: ");
    scanf("%d", &a);
    printf("enter coefficient of x: ");
    scanf("%d", &b);
    printf("enter constant term: ");
    scanf("%d", &c);

    D = (b * b - 4 * a * c);//discriminant
// Classify the roots based on the discriminant
    if (D == 0) {
        y = 1;//real and equal
    } else if (D > 0) {
        y = 2;//real and unequal
    } else {
        y = 3;//complex
    }

    volatile int use_y = y;

    switch (y) {
        case 1: {
            x1 = -b/ (2.0 * a);
            printf("the roots are real and equal and the root is %f\n", x1);
            break;
        }
        case 2: {
            x1 = (-b + sqrt(D)) / (2.0 * a);
            x2 = (-b - sqrt(D)) / (2.0 * a);
            printf("the roots are real and unequal and the roots are %f and %f\n", x1, x2);
            break;
        }
        case 3: {
            float real = -b / (2.0 * a);
            float imag = sqrt(-D) / (2.0 * a);
            printf("the roots are complex and the roots are %f + %fi and %f - %fi\n", real, imag, real, imag);
            break;
        }
        default: {
            printf("invalid\n");
            break;
        }
    }

    return 0;
}
