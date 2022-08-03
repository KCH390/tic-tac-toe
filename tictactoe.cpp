#include <iostream>
#include <random>

using std::endl;
using std::cout;
using std::cin;
using std::string;

void matrix_print(string matrix, int len);
string computer_turn(string matrix, int len, int turn_num);

int main() {
    string board = "*********";
    int row_move, col_move, turn_num{0};
    bool computer_takes_turn = false;

    cout << "******************************************|TIC TAC TOE|******************************************" << endl;
    cout << "    Welcome to TIC TAC TOE! This program uses an array as the board. The player is always X.     " << endl;
    cout << "Moves are made by entering the row followed by the column you would like to place your marker in." << endl;

    while (true){

        // row wins
        if (board[0] == board[1] && board[1] == board[2] && board[0] != '*'){
            matrix_print(board, board.length());
            cout << board[0] << " is the winner!";
            break;
        }
        else if (board[4] == board[5] && board[3] == board[4] && board[5] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[7] == board[8] && board[6] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[7] << " is the winner!";
            break;
        }
        // diagonal wins
        else if (board[0] == board[4] && board[4] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[2] == board[4] && board[6] == board[4] && board[4] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        // column wins
        else if (board[0] == board[3] && board[3] == board[6] && board[3] != '*'){
            matrix_print(board, board.length());
            cout << board[0] << " is the winner!";
            break;
        }
        else if (board[1] == board[4] && board[7] == board[4] && board[4] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[2] == board[8] && board[5] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[8] << " is the winner!";
            break;
        }

        if (computer_takes_turn){
            board = computer_turn(board, board.length(), turn_num);
            computer_takes_turn = false;
            turn_num++;
        }

        if (board[0] == board[1] && board[1] == board[2] && board[0] != '*'){
            matrix_print(board, board.length());
            cout << board[0] << " is the winner!";
            break;
        }
        else if (board[4] == board[5] && board[3] == board[4] && board[5] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[7] == board[8] && board[6] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[7] << " is the winner!";
            break;
        }
            // diagonal wins
        else if (board[0] == board[4] && board[4] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[2] == board[4] && board[6] == board[4] && board[4] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
            // column wins
        else if (board[0] == board[3] && board[3] == board[6] && board[3] != '*'){
            matrix_print(board, board.length());
            cout << board[0] << " is the winner!";
            break;
        }
        else if (board[1] == board[4] && board[7] == board[4] && board[4] != '*'){
            matrix_print(board, board.length());
            cout << board[4] << " is the winner!";
            break;
        }
        else if (board[2] == board[8] && board[5] == board[8] && board[8] != '*'){
            matrix_print(board, board.length());
            cout << board[8] << " is the winner!";
            break;
        }

        matrix_print(board, board.length());
        cout << "Above is the current state of the board.  Input your row number:" << endl;
        cin >> row_move;
        cout << "Now input your column number:" << endl;
        cin >> col_move;

        switch (row_move) {
            case 1: {
                switch (col_move) {
                    case 1: {
                        if (board[0] != 'o' && board[0] != 'x') {
                            board[0] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;

                            continue;
                        }
                    }
                    case 2: {
                        if (board[1] != 'o' && board[1] != 'x') {
                            board[1] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    case 3: {
                        if (board[2] != 'o' && board[2] != 'x') {
                            board[2] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    default: {
                        cout << "It seems you\'ve chosen an invalid column number. The turn cycle will now reset." << endl;
                        computer_takes_turn = false;
                        continue;
                    }
                }
                continue;
            }
            case 2: {
                switch (col_move) {
                    case 1: {
                        if (board[3] != 'o' && board[3] != 'x') {
                            board[3] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    case 2: {
                        if (board[4] != 'o' && board[4] != 'x') {
                            board[4] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    case 3: {
                        if (board[5] != 'o' && board[5] != 'x') {
                            board[5] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            computer_takes_turn = false;
                            continue;
                        }
                    }
                    default: {
                        cout << "It seems you\'ve chosen an invalid column number. The turn cycle will now reset." << endl;
                        continue;
                    }
                }
                continue;
            }
            case 3: {
                switch (col_move) {
                    case 1: {
                        if (board[6] != 'o' && board[6] != 'x') {
                            board[6] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    case 2: {
                        if (board[7] != 'o' && board[7] != 'x') {
                            board[7] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    case 3: {
                        if (board[8] != 'o' && board[8] != 'x') {
                            board[8] = 'x';
                            computer_takes_turn = true;
                            break;
                        }
                        else {
                            cout << "It seems you\'ve chosen a taken location. Play only in * locations. The turn cycle will now reset." << endl;
                            continue;
                        }
                    }
                    default: {
                        cout << "It seems you\'ve chosen an invalid column number. The turn cycle will now reset." << endl;
                        computer_takes_turn = false;
                        continue;
                    }
                }
                continue;
            }
            default:{
                cout << "It seems you\'ve chosen an invalid row number. The turn cycle will now reset." << endl;
                computer_takes_turn = false;
                continue;
            }
        }
    }

    return 0;

}

void matrix_print(string matrix, int len) {
    cout << "" << endl;
    for (int n = 1; n < len + 1; n++){
        cout << matrix[n-1];
        if (n % 3 == 0){
            cout << endl;
        }
    }
}

string computer_turn(string matrix, int len, int turn_num) {

    int computer_move_location,counter = 0;

    const int TOUCH0[9][3] = {{1, 3, 4},
                              {0, 2, 4},
                              {1, 5, 4},
                              {0, 6, 4},
                              {0, 0, 0}, // this is a dummy value to keep matrix values consistent, actual mid-touch is trivial as all other positions touch
                              {4, 2, 8},
                              {3, 4, 7},
                              {6, 4, 8},
                              {4, 7, 5}};

    while (true) {
        if (turn_num == 0 || counter > 20) {
            if (matrix[4] == '*') {
                matrix[4] = 'o';
                return matrix;
            } else {
                computer_move_location = rand() % len;
                if (matrix[computer_move_location] == '*') {
                    matrix[computer_move_location] = 'o';
                    return matrix;
                }
            }
        } else {
            for (int m = 0; m < len; m++) {
                if ((matrix[m] == 'o') and (m not_eq 4)) {
                    computer_move_location = TOUCH0[m][(rand() % 3)];
                    if (matrix[computer_move_location] == '*') {
                        matrix[computer_move_location] = 'o';
                        return matrix;
                    }

                } else if (matrix[m] == 'o') {
                    computer_move_location = rand() % 9;
                    while (computer_move_location == 4) {
                        computer_move_location = rand() % 9;
                    }
                    if (matrix[computer_move_location] == '*') {
                        matrix[computer_move_location] = 'o';
                        return matrix;
                    }
                }
            }
        }
        counter++;
    }
}