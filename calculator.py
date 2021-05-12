import math

print(
    """Welcome to the Cool Calculator program!

    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exponentiation
    6. Sine
    7. Cosine
    8. Tangent
    9. Floor
    10. Ceiling
    11. Round
    12. Absolute value

Enter your choice:"""
)

choice = int(input())

if choice == 1:
    print("Enter the numbers you'd like to add: ")
    a = int(input())
    b = int(input())
    result = a + b

    print("The sum is", result)

if choice == 2:
    print("Enter the numbers you'd like to subtract: ")
    print("The answer is", int(input()) - int(input()))

if choice == 3:
    print("Enter the numbers you'd like to multiply: ")
    print("The product is", int(input()) * int(input()))

if choice == 4:
    print("Enter the numbers you'd like to divide: ")
    print("The answer is", int(input()) / int(input()))

if choice == 5:
    print("Enter the base and power: ")
    print(f"The answer is {int(input()) ** int(input())}")

if choice == 6:
    print("Enter the angle in degrees: ")
    angle = int(input())
    answer = math.sin(math.radians(angle))

    print("The sine value is", answer)

if choice == 7:
    print(
        f"The cosine value is {math.cos(math.radians(int(input('Enter the angle in degrees: '))))}"
    )

if choice == 8:
    print(
        f"The tangent value is {math.tan(math.radians(int(input('Enter the angle in degrees: '))))}"
    )

if choice == 9:
    print(f"The answer is {math.floor(float(input('Enter a decimal: ')))}")

if choice == 10:
    print(f"The answer is {math.ceil(float(input('Enter a decimal: ')))}")

if choice == 11:
    print(f"The answer is {round(float(input('Enter a decimal: ')))}")

if choice == 12:
    print(f"The absolute value is {abs(int(input('Enter a number: ')))}")
