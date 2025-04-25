# Ask the user to make a choice
# If choice is not valid
#   Print an error
# Let the computer to make a choice
# Print choices (emojis)
# Determine the winner
# Ask the user if they want to continue
# If not
#   Terminate

import random

ROCK = 'r'
SCISSORS = 's'
PAPER = 'p'

emojis  = {ROCK:'🪨',SCISSORS:'✂️',PAPER:'📄'}
# choices = (ROCK, PAPER,SCISSORS)
choices = tuple(emojis.keys())

def get_user_choice():
     while True:
        user_choice = input("Rock(r), paper(p), or scissors(s)? (r/p/s): ").lower()
        if user_choice in choices:
            return user_choice
        else:
            print("Invalid choice! ")

def display_choice(user_choice, computer_choice):
    print(f'You chose {emojis[user_choice]}')
    print(f'Computer chose {emojis[computer_choice]}')

def determine_winner(user_choice,computer_choice):
    if user_choice == computer_choice:
        print('Tie!')
    elif (
        (user_choice == ROCK and computer_choice == SCISSORS) or \
        (user_choice == SCISSORS and computer_choice == ROCK) or \
        (user_choice == PAPER and computer_choice == SCISSORS)):
            print('You win')
    else:
            print('You loose')
     
def play_winner():
    while True:
        user_choice = get_user_choice()

        computer_choice = random.choice(choices)

        display_choice(user_choice,computer_choice)

        determine_winner(user_choice,computer_choice)

        should_continue = input('Continue? (y/n): ').lower()
        if should_continue == 'n':
            break

play_winner()