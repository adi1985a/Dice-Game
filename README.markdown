# Dice Game

## Description
A C++ console application simulating a dice game. Players roll two dice over 10 rounds (or until funds run out), winning money/points for sums of 7/11, losing for 2/3/12, or earning points for other sums. Features ASCII dice art, colorful UI, and win multipliers. Created by Adrian Lesniak.

## Features
- Roll two 6-sided dice per round
- Win $20 (with multiplier) for sums of 7/11
- Lose $30 for sums of 2/3/12
- Earn points for sums of 4/5/6/8/9/10
- Track money, points, and high score
- Display ASCII dice
- Colorful console interface
- Up to 10 rounds or until money runs out

## Requirements
- C++ compiler (e.g., g++)
- Windows OS (uses `windows.h` and `conio.h`)

## Installation
1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Compile the program:
   ```bash
   g++ main.cpp -o dice_game
   ```

## Usage
1. Run the program:
   ```bash
   ./dice_game
   ```
2. Read the rules and press any key to start.
3. Play up to 10 rounds:
   - Each round rolls two dice
   - View dice as ASCII art and sum
   - Win/lose money or earn points based on sum
   - Track consecutive wins for multiplier
4. Game ends after 10 rounds or if money reaches $0.
5. View final money, score, and high score.

## Notes
- Starts with $100; each win adds $20 (multiplied by 1.0 + 0.5 per consecutive win), each loss deducts $30.
- Points: 100 for wins, sum × 5 for other sums.
- Uses Windows-specific console functions for color and keypress handling.
- Random number generation seeded with current time.

## Author
Adrian Lesniak

## License
MIT License