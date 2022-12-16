#include <iostream>
#include "ex01-library.h"
int slope(int x, int y);
using namespace std;

// Task 1(a).  Implement this function
Square **createChessboard(unsigned int m, unsigned int n) {
    // Replace the following with your code

    int row = m, column = n;

    Square **squares = new Square*[row];

    for (int i = 0; i < row; ++i) {
        squares[i] = new Square[column];
    }


    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            squares[i][j].piece = none;
            squares[i][j].team = nobody;
        }
    }
    
    
    return squares;
}

// Task 1(b).  Implement this functions
void displayChessboard(Square **c,
                       unsigned int m, unsigned int n) {
    // Write your code here


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {

            Square curr = c[i][j];
            if (curr.piece == none) {
                cout << "_";

            } else {

                if (curr.team == black && curr.piece == king) {
                    cout << "K";

                } else if (curr.team == white && curr.piece == king) {
                    cout << "k";

                } else if (curr.team == black && curr.piece == queen) {
                    cout << "Q";

                } else if (curr.team == white && curr.piece == queen) {
                    cout << "q";
                }

            }
            cout << " ";
        }
        cout << endl;
    }

}

// Task 1(c).  Implement this function
bool move(Square **c, unsigned int m, unsigned int n,
          int r1, int c1, int r2, int c2) {
    // Replace the following with your code

    //if (r1 > m || c1 > n || r2 > m || c2 > n) return false;


    Square source = c[r1][c1];
    Square dest = c[r2][c2];


    if (source.piece == none) {
        return false;
    }

    if (source.team == dest.team) {
        return false;
    }

    if (source.piece == king) {

        int delta_y = abs(r1 - r2);
        int delta_x = abs(c1 - c2);
        int total_delta = delta_x + delta_y;


        if (slope(delta_x, delta_y) == 0) {
            if (total_delta > 1) return false;

        } else {
            if (total_delta > 2) return false;
        }

        c[r2][c2].piece = king;
        c[r2][c2].team = source.team;

        c[r1][c1].piece = none;
        return true;
    }



    return false;
}

// Task 1(d).  Implement this function
bool threatened(Square **c, unsigned int m, unsigned int n,
                int row, int col) {
    // Replace the following with your code
    return false;
}

// Do not modify
void deleteChessboard(Square **c, unsigned int m) {
    for (unsigned int i = 0; i < m; i++) {
        delete[] c[i];
    }
    delete[] c;
}

int slope(int x, int y) {
    if (y == 0) return 0;
    double val = (double ) y/x;
    int val_int = (int ) val;
    if (val - val_int == 0.0) {
        return val_int;
    }

    return 0;
}
