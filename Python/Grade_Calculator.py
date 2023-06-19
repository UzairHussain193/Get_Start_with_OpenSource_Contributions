# Task 5: Grade Calculator
    # Prompt the user to enter the number of tests.
    # Read the input and convert it to an integer.
    # Initialize a variable to keep track of the total score.
    # Enter a loop that iterates for the number of tests.
    # Prompt the user to enter the score for each test.
    # Read the input and convert it to a floating-point number.
    # Add the score to the total score.
    # Calculate the average grade by dividing the total score by the number of tests.
    # Display the average grade to the user.
def calculate_average_grade():
    # Prompt the user to enter the number of tests
    num_tests = int(input("Enter the number of tests: "))

    # Initialize variables
    total_score = 0

    # Loop to collect scores
    for _ in range(num_tests):
        # Prompt the user to enter the score for each test
        score = float(input("Enter the score for a test: "))

        # Add the score to the total score
        total_score += score

    # Calculate the average grade
    average_grade = total_score / num_tests

    # Display the average grade to the user
    print("Average grade:", average_grade)

# Call the function to calculate the average grade
calculate_average_grade()

