# Generate a random number
# Ask the user to make a guess
# If not a valid number
#       Print an error
# If number < guess
#       Print too low
# If number > guess
#       Print too high
# Else
#       Print well done

import random

number_to_guess = random.randint(1, 100)

while True:
    user_input = input("Guess the number between 1 and 100: ")
    
    try:
        guess = int(user_input)
        if guess < number_to_guess:
            print("Too low")
        elif guess > number_to_guess:
            print("Too high")  # Fixed typo here
        else:
            print("\nCongratulations! You guessed the number.")
            break
    except ValueError:
        print("Please enter a valid number")

