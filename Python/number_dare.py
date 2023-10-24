import random

numbers = list(range(1,7)) # change condition
how_many_numbers = 6       # how many numbers need to use
expected_result = 7        # what's the final result
    
def find_number():
    final_result = 0
    guess = []
    for i in range(how_many_numbers):
        rand = random.choice(numbers)
        guess.append(rand)
    
    final_result = sum(guess)    

    if final_result == expected_result:
        print("\nGuess:",guess)
        print("Final result:",final_result)
    else:
        find_number()
        
find_number()
