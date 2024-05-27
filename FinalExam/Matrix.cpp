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
const long max_rand = 1000000L;


/**
 * The <code>fillWithRandomNum</code> function initializes the matrix with random numbers,
 * in the range of <code>RANDOM_MIN</code> - <code>RANDOM_MAX</code>.
 * <BR>
 * @param mat The matrix to be initialized with random numbers
 */
void fillWithRandomNum(double mat[MAX_ROW][MAX_COL]) {
    int i, j;
    uniform_real_distribution<double> unif(RANDOM_MIN, RANDOM_MAX);
    default_random_engine re;
    for (i = 0; i < MAX_ROW; ++i) {
        for (j = 0; j < MAX_COL; ++j)
            mat[i][j] = unif(re);
    }
    assert(i == MAX_ROW);
    assert(j == MAX_COL);
}

