#include <math.h>
#include <stdio.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

// Fill the rest of the functionality here!
// 2. Subtraction
void calcsubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The difference is %d\n", result);
    }
// 3. Multiplication
void calcMultiplication()
{
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = a*b;
    printf("The product is %d\n", ans);
}
// 4. Division
// 5. Exponentiation

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

//cosine
void calcos(){
    printf("\nEnter the angle in degrees:\n");
    float angle;
    scanf("%d",&angle);
    //convert degrees to radian 
    double radian = angle /  180.0 * 3.14;
    double answer = cos(radian);

    printf("The cos value is %f",answer);
}
   
void calcExpo() {
    float num,result;
    int exp;
    printf("Enter the number and its exponent:");
    scanf("%f,%d",&num,&exp);
    result=pow(num,exp);

    printf("%f raised to %d power is %f",num,exp,result);
}

// Fill the rest of the functionality here!
// 7. Cosine
// 8. Tangent
void calcTangent() { 
    double tangentValue;
    double inputValue;
    //get input from user
    printf("Please enter the value to calculate tangent value :");
    scanf("%lf",&inputValue);
    //calculate the tangent value
    tangentValue=tan(inputValue);
    //display the tangent value
    printf("\ntangent value of %lf is %lf\n",inputValue,tangentValue);
}
// 9. Floor
void calcfloor()
{
    float num;
    printf("\n Enter the number: ");
    scanf("%f", &num);
    printf("\n Floor Value: %.1f", floor(num));
}
// 10. Ceiling
// 11. Round
// 12. Absolute value
int division ()
{
	int a,b,c;
        	printf("Enter the two numbers Dividend then Divisor");
        	scanf("%d %d",&a,&b);
        	c= a/b;
        	printf("The Quotient is %d",c);
}

void AbsoluteValue()
{
    printf("\nEnter an integer to find Absolute Value: ");
    int N;
    scanf("%d", &N);
    if (N < 0) {
        N = (-1) * N;
    }

    printf("The Absolute Value of the given integer is: %d ", N);
}

int main() {
	int a,b,c;
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
        case 2:
            calcsubtraction();
            break;
        case 3:
            calcMultiplication();
            break;
        case 4:
        	division();
        	break;
        case 5:
            calcExpo();
            break;
        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
            calcos();
            break;
        case 8:
            calcTangent();
            break;
        case 9:
            calcfloor();
            break;
        case 10:
        case 11:
        case 12:AbsoluteValue();
                break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}
