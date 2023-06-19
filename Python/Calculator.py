# Task 1: Simple Calculator
    # Prompt the user to enter two numbers.
    # Read the input and convert the numbers to floating-point values.
    # Perform basic arithmetic operations (addition, subtraction, multiplication, and division) on the two numbers.
    # Store the results of each operation in separate variables.
    # Display the results to the user.
print("Simple Calculator")

# Prompt the user to enter two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Perform arithmetic operations
addition = num1 + num2
subtraction = num1 - num2
multiplication = num1 * num2

# Check for division by zero
if num2 != 0:
    division = num1 / num2
else:
    division = "Error: Division by zero is not allowed."

# Display the results
print("Addition:", addition)
print("Subtraction:", subtraction)
print("Multiplication:", multiplication)
print("Division:", division)

