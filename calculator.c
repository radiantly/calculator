#include <math.h>
#include <stdio.h>

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            printf("\nEnter two numbers: \n");
            int a, b;
            scanf("%d%d", &a, &b);
            int result = a + b;
            printf("The sum is %d\n", result);
            break;

        case 2:
        case 3:
        case 4:
        case 5:

        // 6. Sine
        case 6:
            printf("\nEnter the angle in degrees: ");
            int angle;
            scanf("%d", &angle);

            // Convert degrees to radians
            double radians = angle / 180.0 * 3.14;
            double answer = sin(radians);

            printf("The sine value is %f", answer);
            break;

        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        default:
            printf("Invalid choice!");
    }
    return 0;
}