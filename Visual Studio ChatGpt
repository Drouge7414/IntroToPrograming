#include <iostream>
#include <vector>
#include <limits> // for numeric_limits
#include <ios>    // for streamsize

using namespace std;

// ANSI color codes
const string ANSI_COLOR_RESET = "\033[0m";
const string ANSI_COLOR_RED = "\033[31m";
const string ANSI_COLOR_GREEN = "\033[32m";
const string ANSI_COLOR_YELLOW = "\033[33m";
const string ANSI_COLOR_BLUE = "\033[34m";
const string ANSI_COLOR_MAGENTA = "\033[35m";
const string ANSI_COLOR_CYAN = "\033[36m";
const string ANSI_COLOR_WHITE = "\033[37m";

// Function prototypes
void initializeBoard(vector<vector<char>>& board);
void printBoard(const vector<vector<char>>& board);
bool isMoveValid(const vector<vector<char>>& board, int row, int col);
bool isBoardFull(const vector<vector<char>>& board);
char checkForWinner(const vector<vector<char>>& board);
void playTicTacToe();
bool askToPlayAgain();

int main() {
    bool playAgain = true;
    do {
        // Display game instructions in green
        cout << ANSI_COLOR_GREEN << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "Instructions:" << endl;
        cout << "- Players take turns to place their mark (" << ANSI_COLOR_RED << "X" << ANSI_COLOR_GREEN << " or " << ANSI_COLOR_BLUE << "O" << ANSI_COLOR_GREEN << ") on the board." << endl;
        cout << "- Enter the row (1-3) and column (1-3) coordinates to make your move." << endl;
        cout << "- To reset the game at any point, enter '0 0'." << endl;
        cout << "- The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins." << endl;
        cout << "- If all cells are filled without a winner, the game is a draw." << endl;
        cout << "Let's begin!" << ANSI_COLOR_RESET << endl << endl;

        // Start the game
        playTicTacToe();

        // Ask if the player wants to play again
        playAgain = askToPlayAgain();

    } while (playAgain);

    cout << "Thank you for playing Tic-Tac-Toe!" << endl;

    return 0;
}

// Initialize the board with empty spaces
void initializeBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        vector<char> row(3, ' ');
        board.push_back(row);
    }
}

// Print the current state of the board
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        // Print contents of the cell
        cout << " ";
        for (int j = 0; j < 3; ++j) {
            if (j != 0) {
                cout << "| ";
            }
            if (board[i][j] == 'X') {
                cout << ANSI_COLOR_RED << board[i][j];
            }
            else if (board[i][j] == 'O') {
                cout << ANSI_COLOR_BLUE << board[i][j];
            }
            else {
                cout << " ";
            }
            cout << " " << ANSI_COLOR_RESET;
        }
        cout << endl;

        // Print horizontal line between rows
        if (i != 2) {
            cout << "---+---+---" << endl;
        }
    }
    cout << endl;
}

// Check if a move is valid
bool isMoveValid(const vector<vector<char>>& board, int row, int col) {
    // Adjust row and col from 1-3 to 0-2 index
    row--; // Convert 1-3 to 0-2
    col--; // Convert 1-3 to 0-2

    // Check if the cell is within bounds and not already occupied
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ');
}

// Check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false; // Found an empty cell, board is not full
            }
        }
    }
    return true; // Board is full
}

// Check if there is a winner
char checkForWinner(const vector<vector<char>>& board) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0]; // Found a winning row
        }
    }

    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            return board[0][j]; // Found a winning column
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0]; // Found a winning diagonal (top-left to bottom-right)
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2]; // Found a winning diagonal (top-right to bottom-left)
    }

    return ' '; // No winner yet
}

// Play the tic-tac-toe game
void playTicTacToe() {
    vector<vector<char>> board;
    initializeBoard(board);
    bool player1Turn = true;
    int row, col;
    char currentPlayer = 'X';
    char winner = ' ';

    while (winner == ' ' && !isBoardFull(board)) {
        cout << endl;
        printBoard(board);
        cout << endl;

        // Determine current player
        if (player1Turn) {
            cout << ANSI_COLOR_WHITE << "Player 1's turn (X): ";
            currentPlayer = 'X';
        }
        else {
            cout << ANSI_COLOR_WHITE << "Player 2's turn (O): ";
            currentPlayer = 'O';
        }

        // Get player move with input validation
        bool validInput = false;
        while (!validInput) {
            cout << ANSI_COLOR_YELLOW << "Enter row and column (1-3, space separated), or '0 0' to reset the game: ";
            if (!(cin >> row >> col)) {
                cout << ANSI_COLOR_MAGENTA << "Invalid input! Please enter numbers." << endl;
                cin.clear(); // Clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
            else if (row == 0 && col == 0) {
                cout << "Resetting the game..." << endl;
                initializeBoard(board);
                player1Turn = true; // Reset player turn to Player 1
                winner = ' '; // Reset winner status
                validInput = true; // Exit input loop
            }
            else if (!isMoveValid(board, row, col)) {
                cout << ANSI_COLOR_MAGENTA << "Invalid move! Please enter valid coordinates." << endl;
            }
            else {
                validInput = true;
            }
        }

        if (row != 0 && col != 0) {
            // Convert row and col from 1-3 to 0-2 index
            row--; // Convert 1-3 to 0-2
            col--; // Convert 1-3 to 0-2

            board[row][col] = currentPlayer;
            player1Turn = !player1Turn; // Switch turn
            winner = checkForWinner(board); // Check for winner
        }
    }

    // Game over, print final board and result
    cout << endl;
    printBoard(board);
    cout << endl;

    if (winner != ' ') {
        if (winner == 'X') {
            cout << ANSI_COLOR_RED << "Player 1 wins!" << endl;
        }
        else {
            cout << ANSI_COLOR_BLUE << "Player 2 wins!" << endl;
        }
    }
    else {
        cout << ANSI_COLOR_GREEN << "It's a draw!" << endl;
    }

    cout << ANSI_COLOR_RESET;
}

// Ask players if they want to play again
bool askToPlayAgain() {
    char choice;
    cout << endl;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    cout << endl; // New line for better formatting
    if (choice == 'n' || choice == 'N') {
        return false;
    }
    else {
        return true;
    }
}
