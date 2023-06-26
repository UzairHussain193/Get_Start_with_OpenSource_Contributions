# Task 3: Area and Perimeter Calculator
    # Prompt the user to choose a shape (rectangle, square, or circle).
    # Based on the user's choice, prompt for the necessary inputs (length, width, or radius).
    # Read the inputs and convert them to the appropriate data types.
    # Calculate the area and perimeter based on the chosen shape using the corresponding formulas.
    # Store the calculated values in separate variables.
    # Display the area and perimeter to the user.


import math

# Prompt the user to choose a shape
shape = input("Choose a shape (rectangle, square, circle): ")

if shape == "rectangle":
    length = float(input("Enter the length: "))
    width = float(input("Enter the width: "))

    area = length * width
    perimeter = 2 * (length + width)

    print("Area: ", area)
    print("Perimeter: ", perimeter)

elif shape == "square":
    side = float(input("Enter the side length: "))

    area = side * side
    perimeter = 4 * side

    print("Area: ", area)
    print("Perimeter: ", perimeter)

elif shape == "circle":
    radius = float(input("Enter the radius: "))

    area = math.pi * radius ** 2
    perimeter = 2 * math.pi * radius

    print("Area: ", area)
    print("Circumference: ", perimeter)

else:
    print("Invalid shape choice.")
