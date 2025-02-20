#include<iostream.h>
#include<conio.h>

int gameOver = 0, player1Points = 0, player2Points = 0;
char arr[10];

void resetBoard() {
    for (int i = 1; i < 10; i++) {
        arr[i] = '0' + i; // Reset board numbers 1-9
    }
}

void displayBoard() {
    clrscr();
    cout << "Tic-Tac-Toe\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n";
    cout << "Points: " << player1Points << " - " << player2Points << "\n\n";

    cout << " " << arr[1] << " | " << arr[2] << " | " << arr[3] << endl;
    cout << "---+---+---\n";
    cout << " " << arr[4] << " | " << arr[5] << " | " << arr[6] << endl;
    cout << "---+---+---\n";
    cout << " " << arr[7] << " | " << arr[8] << " | " << arr[9] << endl;
}

void gameLogic() {
    int winCombos[8][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, // Rows
        {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, // Columns
        {1, 5, 9}, {3, 5, 7}  // Diagonals
    };

    for (int i = 0; i < 8; i++) {
        int a = winCombos[i][0], b = winCombos[i][1], c = winCombos[i][2];
        if (arr[a] == arr[b] && arr[b] == arr[c]) {
            if (arr[a] == 'X') {
                cout << "Player 1 wins!\n";
                player1Points++;
            } else {
                cout << "Player 2 wins!\n";
                player2Points++;
            }
            gameOver = 1;
            return;
        }
    }
}

int playerTurn(int player) {
    if (gameOver == 1) return 1;

    int choice;
    char mark = (player == 1) ? 'X' : 'O';

    cout << "Player " << player << " (" << mark << ") Turn: ";
    cin >> choice;

    if (choice < 1 || choice > 9 || arr[choice] == 'X' || arr[choice] == 'O') {
        cout << "Invalid move! Try again.\n";
        return playerTurn(player);
    }

    arr[choice] = mark;
    displayBoard();
    gameLogic();
    return 0;
}

int main() {
    clrscr();
    char playAgain;

    do {
        resetBoard();
        gameOver = 0;
        displayBoard();

        for (int i = 0; i < 4; i++) {
            playerTurn(1);
            if (gameOver) break;
            playerTurn(2);
            if (gameOver) break;
        }

        if (!gameOver) {
            playerTurn(1);
            if (!gameOver) cout << "It's a tie!\n";
        }

        cout << "\nCurrent Score - Player 1: " << player1Points << " | Player 2: " << player2Points << "\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Final Score - Player 1: " << player1Points << " | Player 2: " << player2Points << "\n";
    cout << "Thanks for playing!";
    getch();
    return 0;
}
