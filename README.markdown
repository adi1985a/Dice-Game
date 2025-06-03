# 🎲💰 Dice Roller Royale: Fortune's Favor 🍀
_A thrilling C++ console dice game where strategy, luck, and a dash of daring can lead to riches or ruin!_

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📝 Project Description

**Dice Roller Royale** is a captivating console-based C++ game that simulates a high-stakes dice rolling adventure. Players start with a modest bankroll and aim to maximize their fortune and score over a series of up to 10 thrilling rounds. Each round involves rolling two six-sided dice, with outcomes determining wins, losses, or point gains based on classic dice game rules. The game features engaging ASCII art to display the dice, a colorful user interface for enhanced immersion, and an exciting win multiplier system that rewards consecutive successes. Can you master the odds and become the Dice Roller Royale champion?

## ✨ Key Features

*   🎲 **Classic Dice Rolling Action**: Experience the thrill of rolling two virtual 6-sided dice in each round.
*   💰 **Win Big or Go Home**:
    *   **Instant Win**: Roll a sum of 7 or 11 to win $20 (boosted by the current win streak multiplier!).
    *   **Unlucky Rolls**: A sum of 2, 3, or 12 results in a $30 loss.
    *   **Point Rolls**: Other sums (4, 5, 6, 8, 9, 10) earn you valuable points for the high score.
*   📈 **Dynamic Scoring & Multipliers**:
    *   **Money**: Start with $100. Wins add $20 (multiplied), losses deduct $30.
    *   **Points**: Earn 100 points for monetary wins (7 or 11). For other scoring sums, earn `sum × 5` points.
    *   **Win Streak Multiplier**: Consecutive wins (7 or 11) increase a multiplier (1.0x, 1.5x, 2.0x, etc.), significantly boosting your cash winnings!
*   🏆 **Track Your Progress**: Keep an eye on your current money, total points, and the all-time high score.
*   🎨 **ASCII Dice Art**: See your dice rolls visualized with charming ASCII art.
*   🌈 **Colorful Console Experience**: Utilizes Windows console functions for a vibrant and engaging user interface.
*   ⏳ **Limited Rounds**: The game lasts for up to 10 rounds, or until your money runs out – manage your funds wisely!

## 🖼️ Screenshots

**Coming soon!**

_In the future, screenshots showcasing the dice rolls, scoring, and the colorful interface will be added here._

## ⚙️ System Requirements

*   **Operating System**: Windows (due to the use of `windows.h` for console color manipulation and `conio.h` for keypress handling like `_getch()`).
*   **C++ Compiler**: Any modern C++ compiler that supports C++11 or newer (e.g., g++, MinGW, Clang, MSVC).
*   **No External Dependencies**: The game is self-contained, relying only on standard C++ libraries and Windows-specific headers.

## 🛠️ Installation and Running

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    ```
    (Replace `<repository-url>` with the actual URL of your repository)

2.  **Navigate to the Project Directory**:
    ```bash
    cd <repository-directory>
    ```
    (Replace `<repository-directory>` with the name of the cloned folder)

3.  **Compile the Program**:
    Open a terminal (like Command Prompt or PowerShell) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ main.cpp -o dice_game.exe -static-libgcc -static-libstdc++
    ```
    *(Assuming your main source code file is `main.cpp`)*

4.  **Run the Game**:
    After successful compilation, execute the generated program:
    ```bash
    ./dice_game.exe
    ```
    or simply in CMD:
    ```bash
    dice_game.exe
    ```

## ▶️ How to Play

1.  Launch the game as described in the "Installation and Running" section.
2.  You'll be presented with the game rules. Read them carefully and press any key to start your gambling adventure.
3.  The game proceeds in rounds, up to a maximum of 10:
    *   In each round, press any key to roll two dice.
    *   The game will display the outcome of each die using ASCII art, along with their sum.
    *   Based on the sum, you will either win money (with a potential multiplier), lose money, or earn points.
    *   Your current money, points, and any active win streak multiplier will be updated and displayed.
4.  The game ends under one of two conditions:
    *   You complete all 10 rounds.
    *   Your money drops to $0 or below.
5.  At the end of the game, your final money, total score, and the current high score will be shown.

## 💡 Game Mechanics & Technical Details

*   **Random Dice Rolls**: Dice outcomes are generated using C++'s random number facilities, seeded with the current time (`srand(time(NULL))`) to ensure fair and unpredictable rolls.
*   **Money Management**: Players start with $100. Winning on a 7 or 11 adds $20 multiplied by `(1.0 + 0.5 * consecutive_wins)`. Losing on a 2, 3, or 12 deducts $30.
*   **Point System**:
    *   A sum of 7 or 11 (monetary win) also grants 100 points.
    *   Other sums (4, 5, 6, 8, 9, 10) grant points equal to `(sum of dice) * 5`.
*   **Win Streak Multiplier**: Successfully rolling a 7 or 11 consecutively increases a cash prize multiplier. This multiplier resets if a round does not result in a 7 or 11.
*   **High Score**: The game tracks the highest point score achieved (details of persistence, e.g., file or session-only, depend on implementation).
*   **Console I/O**: Uses `iostream` for basic output and `conio.h` (e.g., `_getch()`) for non-buffered keypresses. Windows-specific functions from `windows.h` are employed for colored text output.

## 🤝 Contributing

Contributions to **Dice Roller Royale** are highly encouraged! If you have ideas for new betting options, enhanced graphics, or other improvements:

1.  Fork the repository.
2.  Create a new branch for your changes: `git checkout -b feature/your-cool-idea`
3.  Make your modifications and commit them: `git commit -m "Feature: Implement your cool idea"`
4.  Push your changes to your branch: `git push origin feature/your-cool-idea`
5.  Open a Pull Request.

Please maintain code style consistency and include comments for clarity.

## ✍️ Author

**Adrian Lesniak**
_C++ Developer & Game Design Enthusiast_

## 📃 License

This project is licensed under the **MIT License**.
The full text of the license is available at: [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

---
🎰 _Roll the bones and may fortune smile upon you!_
