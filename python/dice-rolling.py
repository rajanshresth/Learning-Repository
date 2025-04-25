# Ask: roll the dice?
# if user enters 'yes', roll the dice again
#   Generate two random numbers
#   Print them
# if user enters n
#   Print thank you message
#   Terminate
# Else
#   Print invalid choice

import random

while True:
    choice = input("Roll the dice? (y/n): ").lower()
    if choice == 'y':
        die1 = random.randint(1,6)
        die2 = random.randint(1,6)
        print(f'({die1},{die2})')
    elif choice == 'n':
        print("Thanks for playing!")
    else:
        print("Invalid number")