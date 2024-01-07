#include <iostream>
using namespace std;


void drawBoard(char board[]) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}


char checkWin(char board[]) {
   
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  
        {0, 4, 8}, {2, 4, 6}              
    };

    for (int i = 0; i < 8; ++i) {
        if (board[winCombos[i][0]] == board[winCombos[i][1]] &&
            board[winCombos[i][1]] == board[winCombos[i][2]] &&
            board[winCombos[i][0]] != ' ') {
            return board[winCombos[i][0]]; 
        }
    }

    
    for (int i = 0; i < 9; ++i) {
        if (board[i] == ' ') {
            return ' '; 
        }
    }
    return 'D'; // Draw
}

int main() {
    char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    bool player1Turn = true;
    char currentPlayer = 'X';
    char gameStatus = ' ';

    cout << "Welcome to Tic Tac Toe!" << endl;

    do {
        
        drawBoard(board);


        int move;
        do {
            cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            cin >> move;
        } while (move < 1 || move > 9 || board[move - 1] != ' ');


        board[move - 1] = currentPlayer;

        
        gameStatus = checkWin(board);

 
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (gameStatus == ' ');

    
    drawBoard(board);

    
    if (gameStatus == 'X' || gameStatus == 'O') {
        cout << "Player " << gameStatus << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
