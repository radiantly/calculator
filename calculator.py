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

# Fill the rest of the functionality here!
# 2. Subtraction
# 3. Multiplication
# 4. Division
# 5. Exponentiation

if choice == 6:
    print("Enter the angle in degrees: ")
    angle = int(input())
    answer = math.sin(math.radians(angle))

    print("The sine value is", answer)

# Fill the rest of the functionality here!
# 7. Cosine
# 8. Tangent
# 9. Floor
# 10. Ceiling
# 11. Round
# 12. Absolute value
