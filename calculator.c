#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

// 2. Subtraction
void calcSubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The answer is %d\n", result);
}

// 3. Multiplication
void calcMultiplication() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The product is %d\n", result);
}

// 4. Division
void calcDivision() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    double result = (double)a / b;
    printf("The answer is %f\n", result);
}

// 5. Exponentiation
void calcExp() {
    printf("\nEnter the base and power: \n");
    double a, b;
    scanf("%lf%lf", &a, &b);
    double result = pow(a, b);
    printf("The answer is %lf\n", result);
}

// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

// 7. Cosine
void calcCosine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = cos(radians);

    printf("The cosine value is %f", answer);
}

// 8. Tangent
void calcTangent() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = tan(radians);

    printf("The tangent value is %f", answer);
}

// 9. Floor
void calcFloor() {
    printf("\nEnter a decimal: \n");
    double f;
    scanf("%lf", &f);
    int result = floor(f);
    printf("The answer is %d\n", result);
}

// 10. Ceiling
void calcCeiling() {
    printf("\nEnter a decimal: \n");
    double f;
    scanf("%lf", &f);
    int result = ceil(f);
    printf("The answer is %d\n", result);
}

// 11. Round
void calcRound() {
    printf("\nEnter a decimal: \n");
    double f;
    scanf("%lf", &f);
    int result = round(f);
    printf("The answer is %d\n", result);
}

// 12. Absolute value
void calcAbsolute() {
    printf("\nEnter a number: \n");
    int n;
    scanf("%d", &n);
    int result = abs(n);
    printf("The answer is %d\n", result);
}

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
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        // 2. Subtraction
        case 2:
            calcSubtraction();
            break;

        // 3. Multiplication
        case 3:
            calcMultiplication();
            break;

        // 4. Division
        case 4:
            calcDivision();
            break;

        // 5. Exponentiation
        case 5:
            calcExp();
            break;

        // 6. Sine
        case 6:
            calcSine();
            break;

        // 7. Cosine
        case 7:
            calcCosine();
            break;

        // 8. Tangent
        case 8:
            calcTangent();
            break;

        // 9. Floor
        case 9:
            calcFloor();
            break;

        // 10. Ceiling
        case 10:
            calcCeiling();
            break;

        // 11. Absolute value
        case 11:
            calcRound();
            break;

        // 12. Absolute value
        case 12:
            calcAbsolute();
            break;

        default:
            printf("Invalid choice!");
    }
    return 0;
}