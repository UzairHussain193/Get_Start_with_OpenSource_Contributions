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
    # code a formula to calculate perimeter of rectangle and save in variable.

    print("Area: ", area)
    print("Perimeter: ", perimeter)

elif shape == "square":
    side = float(input("Enter the side length: "))

    # code a formula to calculate area of square and save in variable.
    perimeter = 4 * side

    print("Area: ", area)
    print("Perimeter: ", perimeter)

# write a code to find area and perimeter for circle as well.