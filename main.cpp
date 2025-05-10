#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <string>

using namespace std;

// Structure for game statistics
struct GameStats {
    int wins = 0;
    int losses = 0;
    int points = 0;
    int highScore = 0;
    double money = 100.0;
};

// Function to display ASCII dice
void displayDice(int value) {
    string dice[6][3] = {
        {"+-------+", "|   *   |", "+-------+"}, // 1
        {"+-------+", "| *   * |", "+-------+"}, // 2
        {"+-------+", "|* * * |", "+-------+"}, // 3
        {"+-------+", "|* * * *|", "+-------+"}, // 4
        {"+-------+", "|* * * *|", "+-------+"}, // 5
        {"+-------+", "|* * * *|", "+-------+"}  // 6
    };
    
    for(int i = 0; i < 3; i++) {
        cout << dice[value-1][i] << endl;
    }
}

// Function to calculate win multiplier based on consecutive wins
double getMultiplier(int consecutiveWins) {
    return 1.0 + (consecutiveWins * 0.5);
}

int main() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GameStats stats;
    int consecutiveWins = 0;

    cout << "THE GAME OF DICE" << endl;

    SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    cout << ("\nPlay dice, earn money and points!") << endl;

    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\nDice game rules: " << endl;
    cout << "\n1. You roll two dice, each with 6 sides." << endl;
    cout << "2. You start with 100kr, each win gives you 20kr and a loss takes 30kr." << endl;
    cout << "3. The game lasts ten turns, but may end sooner if you run out of available funds." << endl;
    cout << "4. If the sum of the two dice on the first roll is either 7 or 11, you win." << endl;
    cout << "5. If the sum of the two dice on the first roll is: 2, 3 or 12, you lose." << endl;
    cout << "6. If the sum of both dice on the first roll is: 4, 5, 6, 8, 9 or 10 then the sum becomes your points." << endl;
    cout << "7. If you want to win you must keep rolling the dice up to 10 turns." << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << endl << "If you are familiar with the rules then click ANY KEY to start the game.." << endl;
    getch();
    system("cls");

    srand(time(0));

    for (int round = 0; round < 10 && stats.money > 0; round++) {
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "\n=================== Round " << round + 1 << " ===================\n";
        cout << "Current Money: $" << stats.money << " | Points: " << stats.points << endl;
        cout << "Consecutive Wins: " << consecutiveWins << " (Multiplier: x" << getMultiplier(consecutiveWins) << ")\n\n";

        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;

        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "Rolling dice...\n\n";
        displayDice(dice1);
        cout << endl;
        displayDice(dice2);

        // Replace FOREGROUND_WHITE with all colors for white
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "\nSum: " << sum << endl;

        if (sum == 7 || sum == 11) {
            double winAmount = 20.0 * getMultiplier(consecutiveWins);
            stats.money += winAmount;
            stats.points += 100;
            consecutiveWins++;
            SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "WINNER! You won $" << winAmount << "!\n";
        }
        else if (sum == 2 || sum == 3 || sum == 12) {
            stats.money -= 30;
            consecutiveWins = 0;
            SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "LOSS! You lost $30\n";
        }
        else {
            stats.points += sum * 5;
            // Replace FOREGROUND_YELLOW with red+green combination for yellow
            SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "You earned " << sum * 5 << " points!\n";
        }

        if (stats.points > stats.highScore) {
            stats.highScore = stats.points;
        }

        cout << "\nPress any key to continue...\n";
        _getch();
        system("cls");
    }

    // Final results
    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\n============ GAME OVER ============\n";
    cout << "Final Money: $" << stats.money << endl;
    cout << "Final Score: " << stats.points << endl;
    cout << "High Score: " << stats.highScore << endl;
    cout << "==================================\n";

    return 0;
}

