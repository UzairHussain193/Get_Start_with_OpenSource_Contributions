# Task 4: Password Generator
    # Prompt the user to specify the desired password length and the character types to include (letters, numbers, and symbols).
    # Read the inputs and convert them to appropriate data types.
    # Based on the user's preferences, construct a pool of characters that can be used in the password.
    # Check if at least one character type has been selected. If not, display an error message.
    # Generate a random password by selecting characters from the character pool, repeating the process for the desired length.
    # Display the generated password to the user.



import random
import string

# Prompt the user for password criteria
length = int(input("Enter the desired password length: "))
include_letters = input("Include letters? (y/n): ").lower() == 'y'
include_numbers = input("Include numbers? (y/n): ").lower() == 'y'
include_symbols = input("Include symbols? (y/n): ").lower() == 'y'

# Generate password based on the criteria
characters = ''
if include_letters:
    characters += string.ascii_letters
if include_numbers:
    characters += string.digits
if include_symbols:
    characters += string.punctuation

if len(characters) == 0:
    print("Please choose at least one character type.")
else:
    password = ''.join(random.choice(characters) for _ in range(length))
    print("Generated Password:", password)
