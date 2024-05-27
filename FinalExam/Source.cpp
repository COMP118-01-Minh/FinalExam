
/** \file Source.cpp
 *  \brief     A final exam program
 *  \details   The program source to show the menu of options and execute
 *  \author    Minh Nguyen Truong Quang Minh
 *  \version   0.1
 *  \date      27/05/2024
 *  \pre       First initialize the system.
 *  \bug       No bugs so far
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include "Matrix.h"

using namespace std;

// Fun prototypes
void showMenu();

/**
 * The <code>main</code> is the driver function that kick-starts the
 * application.
 * <BR>
 * @return Returns <code>0</code> on success, any other value otherwise.
 */
int main() {
    int choice = 0;

    // Defining the matrix
    const int ROWS = 5;
    const int COLLUMNS = 2;
    double matrix[ROWS][COLLUMNS] = { {0.0} };
    

    do {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        case 1:
            fillWithRandomNum(matrix);
            break;
        case 2:
            printMatrix(matrix);
            break;
        case 3:
            double sum = sumPositiveNumbers(matrix);
            cout << "The sum of all positive numbers in the matrix is: " << sum;
            break;
        //default:
        //    cerr << "\nWrong choice";
        }
    } while (choice != 0);

    cout << "\nHave a nice day:)";
    return 0;
}

/**
 * The <code>showMenu</code> function displays the menu options to the user.
 */
void showMenu() {
    cout << "\n1) Fill Matrix with numbers from -0.5 to 4.5";
    cout << "\n2) Show matrix";
    cout << "\n3) Sum of all positive numbers in the matrix";
    cout << "\n0) Exit";
    cout << "\nEnter choice: ";
}
