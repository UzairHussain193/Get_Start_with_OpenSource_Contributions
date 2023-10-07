'''
@Author: hariom09090
'''

def is_palindrome(input_string):
    # Remove spaces and convert to lowercase for case-insensitive comparison
    cleaned_string = ''.join(input_string.split()).lower()
    
    # Compare the string with its reverse
    return cleaned_string == cleaned_string[::-1]
    # [::-1] is a slicing notation used to reverse a sequence such as a string, list, or tuple. When you use [::-1] as a slice, it creates a new sequence that is the reverse of the original sequence.

# Test the function
input_str = input("Enter a string: ")
if is_palindrome(input_str):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
