
# Number Guessing Game


This is a simple number guessing game implemented in C++. The game randomly generates a number between 0 and 250, and the player needs to guess the number. The game provides hints whether the guessed number is too high or too low. The player wins when they guess the correct number.




## How to Play

1. Run the program.
2. You will be prompted with options:
- Enter 1 to play the game.
- Enter 0 to quit the game.
3. If you choose to play:
- Guess the number.
- The game will inform you if your guess is too high or too low.
- Keep guessing until you find the correct number.
4. Once you win, the game will congratulate you and display your guesses.
5.  Your best record will be updated and stored in the Record.txt file.
## Features

- Random number generation.
- User input handling.
- Records the best attempt made by the player.
- Basic file I/O operations for recording the best attempt.
## Requirements

- C++ compiler
- Standard C++ libraries
## File Structure

- main.cpp: Contains the source code of the game.
- Record.txt: Stores the best attempt made by the player.
##  How to Compile and Run

Compile the program using any C++ compiler:

```bash
  g++ main.cpp -o number_guessing_game
```

Run the compiled executable:

```bash
  ./number_guessing_game    
```

