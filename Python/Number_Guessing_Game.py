# Task 2: Number_Guessing_Game
    # Generate a random number between 1 and 100 using the random.randint() function.
    # Enter a game loop that continues until the user guesses the correct number.
    # Prompt the user to guess a number.
    # Read the input and convert it to an integer.
    # Compare the user's guess with the randomly generated number.
    # Provide feedback to the user if the guess is too high or too low.
    # If the guess is correct, display a congratulatory message and exit the loop.


import random

def play_game():
    # Generate a random number
    secret_number = random.randint(1, 100)

    # Set the maximum number of attempts
    max_attempts = 5
    attempts = 0

    # Game loop
    while attempts < max_attempts:
        # Prompt the user to guess the number
        guess = int(input("Guess the number (between 1 and 100): "))

        # Provide feedback to the user
        if guess < secret_number:
            print("Too low! Try again.")
        elif guess > secret_number:
            print("Too high! Try again.")
        else:
            print("Congratulations! You guessed the number correctly.")
            return

        attempts += 1

    print("Sorry, you ran out of attempts. The number was", secret_number)

# Call the function to start the game
play_game()

