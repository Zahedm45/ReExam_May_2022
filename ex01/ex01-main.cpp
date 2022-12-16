#include <iostream>
#include "ex01-library.h"
using namespace std;

int main() {
    int m = 5, n = 5;
    Square **c = createChessboard(m, n);
/*    c[0][0] = {queen, black};
    c[0][3] = {king, black};
    c[2][0] = {king, white};
    c[1][2] = {queen, white};*/
    c[2][2] = {king, black};

    cout << "Chessboard:" << endl;
    displayChessboard(c, m, n);
    bool val = move(c, m, n, 2, 2, 4, 2);
    cout << val << endl;

    cout << "Chessboard:" << endl;
    displayChessboard(c, m, n);




    /* cout << "Is the piece in (0,0) threatened? ";
     if (threatened(c, 3, 4, 0, 0)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     cout << "Can we move from (0,0) to (0,3)? ";
     if (move(c, 3, 4, 0, 0, 0, 3)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     cout << "Can we move from (0,0) to (0,2)? ";
     if (move(c, 3, 4, 0, 0, 0, 2)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     cout << "Can we move from (2,0) to (2,2)? ";
     if (move(c, 3, 4, 2, 0, 2, 2)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     cout << "Can we move from (1,2) to (0,3)? ";
     if (move(c, 3, 4, 1, 2, 0, 3)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     cout << endl << "The chessboard is now:" << endl;
     displayChessboard(c, 3, 4);

     cout << "Is the piece in (2,0) threatened? ";
     if (threatened(c, 3, 4, 2, 0)) { cout << "Yes!" << endl; }
     else { cout << "No!" << endl; }

     deleteChessboard(c, 3);*/
    return 0;
}
