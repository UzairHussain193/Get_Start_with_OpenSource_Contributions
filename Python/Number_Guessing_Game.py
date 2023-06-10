# Task 2: Number_Guessing_Game
    # Generate a random number between 1 and 100 using the random.randint() function.
    # Enter a game loop that continues until the user guesses the correct number.
    # Prompt the user to guess a number.
    # Read the input and convert it to an integer.
    # Compare the user's guess with the randomly generated number.
    # Provide feedback to the user if the guess is too high or too low.
    # If the guess is correct, display a congratulatory message and exit the loop.


import random

# Generate a random number
secret_number = random.randint(1, 10)

# Game loop
while True:
    # Prompt the user to guess the number
    guess = int(input("Guess the number (between 1 and 10): "))

    # Provide feedback to the user
    if guess < secret_number:
        print("Too low! Try again.")
    elif guess > secret_number:
        print("Too high! Try again.")
    else:
        print("Congratulations! You guessed the number correctly.")
        break
