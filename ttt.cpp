#include <iostream>
using namespace std;

// The board is a 3x3 array of chars.
// Each cell holds ' ', 'X', or 'O'.
char board[3][3];

// ──────────────────────────────────────────
// Set every cell back to a space (empty).
// ──────────────────────────────────────────
void resetBoard() {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            board[row][col] = ' ';
}

// ──────────────────────────────────────────
// Print the board to the terminal.
// We also show position numbers on the side
// so players know where to move.
// ──────────────────────────────────────────
void printBoard() {
    cout << "\n";
    cout << "  1   2   3  <- column\n";
    cout << "  ─────────\n";

    for (int row = 0; row < 3; row++) {
        cout << row + 1 << " "; // row number
        for (int col = 0; col < 3; col++) {
           cout << " " << board[row][col] << " ";
            if (col < 2) cout << "│";
        }
        cout << "\n";
        if (row < 2)
            cout << "  ─────────\n";
    }
    cout << "^\nrow\n\n";
}

// ──────────────────────────────────────────
// Check whether a given player ('X' or 'O')
// has won the game.
// Returns true if they have, false otherwise.
// ──────────────────────────────────────────
bool checkWin(char player) {
    // Check all 3 rows
    for (int row = 0; row < 3; row++)
        if (board[row][0] == player &&
            board[row][1] == player &&
            board[row][2] == player)
            return true;

    // Check all 3 columns
    for (int col = 0; col < 3; col++)
        if (board[0][col] == player &&
            board[1][col] == player &&
            board[2][col] == player)
            return true;

    // Check top-left to bottom-right diagonal
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
        return true;

    // Check top-right to bottom-left diagonal
    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
        return true;

    return false; // no win found
}

// ──────────────────────────────────────────
// Check if the board is completely full
// (no empty spaces left).
// ──────────────────────────────────────────
bool isBoardFull() {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (board[row][col] == ' ')
                return false; // found an empty cell
    return true;
}

// ──────────────────────────────────────────
// Ask the current player for their move.
// Keeps asking until they enter a valid,
// empty cell.
// ──────────────────────────────────────────
void playerMove(char player) {
    int row, col;

    while (true) {
        cout << "Player " << player << ", enter row (1-3) and column (1-3): ";
        cin >> row >> col;

        // Convert from 1-based input to 0-based array index
        row--;
        col--;

        // Validate the input
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Out of range! Use numbers 1, 2, or 3.\n";
            continue;
        }

        if (board[row][col] != ' ') {
            cout << "That cell is already taken. Try again.\n";
            continue;
        }

        // Valid move — place the player's symbol
        board[row][col] = player;
        break;
    }
}

// ──────────────────────────────────────────
// Main: ties everything together.
// ──────────────────────────────────────────
int main() {
    char playAgain = 'y';

    cout << "=== Tic-Tac-Toe ===\n";
    cout << "Two players take turns: X goes first.\n";
    cout << "Enter row then column (e.g. '2 3').\n";

    while (playAgain == 'y' || playAgain == 'Y') {

        resetBoard();
        char currentPlayer = 'X';
        bool gameOver = false;

        while (!gameOver) {
            printBoard();
            playerMove(currentPlayer);

            if (checkWin(currentPlayer)) {
                printBoard();
                cout << "🎉 Player " << currentPlayer << " wins!\n";
                gameOver = true;
            } else if (isBoardFull()) {
                printBoard();
                cout << "It's a draw!\n";
                gameOver = true;
            } else {
                // Switch to the other player
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
