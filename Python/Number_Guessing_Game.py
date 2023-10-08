import random

def number_guessing_game():
    # Generate a random number between 1 and 100
    target_number = random.randint(1, 100)
    
    attempts = 0
    guessed_number = None
    
    print("Welcome to the Number Guessing Game!")
    print("I'm thinking of a number between 1 and 100.")
    
    while guessed_number != target_number:
        try:
            guessed_number = int(input("Take a guess: "))
            attempts += 1
            
            if guessed_number < target_number:
                print("Too low! Try again.")
            elif guessed_number > target_number:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number in {attempts} attempts.")
                print(f"The number was {target_number}.")
        except ValueError:
            print("Please enter a valid number.")
            
if __name__ == "__main__":
    number_guessing_game()
