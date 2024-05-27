/** \file Matrix.cpp
 *  \brief     A small marix library, implementation file
 *  \details   The executional file where all the functions lie
 *  \author    Minh Nguyen Truong Quang
 *  \version   0.1
 *  \date      277/5/2024
 *  \pre       First initialize the system.
 *  \bug       
 *  \copyright University of Nicosia.
 */
#include <iostream>
#include <cassert>
#include "Matrix.h"
#include <time.h>
#include <random>

using namespace std;

/**
 * The <code>fillWithRandomNum</code> function initializes the matrix with random numbers,
 * in the range of <code>RANDOM_MIN</code> - <code>RANDOM_MAX</code>.
 * <BR>
 * @param mat The matrix to be initialized with random numbers
 */
void fillWithRandomNum(double mat[MAX_ROW][MAX_COL]) {
    int i, j;

    default_random_engine gen;
    uniform_real_distribution<double> distribution(RANDOM_MIN, RANDOM_MAX);

    for (i = 0; i < MAX_ROW; ++i) {
        for (j = 0; j < MAX_COL; ++j)
            mat[i][j] = distribution(gen);
    }
    assert(i == MAX_ROW);
    assert(j == MAX_COL);
}

/**
 * The <code>printMatrix</code> function shows the content of the matrix.
 * <BR>
 * @param mat The matrix to be shown
 */
void printMatrix(const double mat[MAX_ROW][MAX_COL]) {
    int i, j;
    cout << "\n\nContent of matrix";

    for (i = 0; i < MAX_ROW; ++i) { // add the column identifier at the top
        cout << "\nRow " << i << ": ";
        for (j = 0; j < MAX_COL; ++j)
            cout << mat[i][j] << "\t"; // make it nice by using setw()
    }
    cout << endl;
    assert(i == MAX_ROW);
    assert(j == MAX_COL);
}
/**
* The <code>sumPositiveNumbers</code> function shows the value of all positive numbers in the matrix.
* <BR>
* @param mat The matrix to be shown
*/
double sumPositiveNumbers(const double mat[MAX_ROW][MAX_COL]){
    int i, j;
    double sum = 0.0;
    for (i = 0; i < MAX_ROW; ++i) {
        for (j = 0; j < MAX_COL; ++j)
            if (mat[i][j] >= 0)
                sum += mat[i][j];
    }
    assert(i == MAX_ROW);
    assert(j == MAX_COL);
    return sum;
}
