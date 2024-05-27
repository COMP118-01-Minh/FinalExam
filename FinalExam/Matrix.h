/** \file Matrix.h
 *  \brief     A small marix library, header file
 *  \details   The header file of the matrix
 *  \author    Minh Nguyen Truong Quang
 *  \version   0.1
 *  \date      24/05/2024
 *  \pre       First initialize the system.
 *  \bug       No bugs so far
 *  \copyright University of Nicosia.
 */
#ifndef MATRIX_H
#define MATRIX_H

 // Global constant
const int MAX_ROW = 5;
const int MAX_COL = 2;

const double RANDOM_MIN = -.5;
const double RANDOM_MAX = 4.5;


void fillWithRandomNum(double mat[MAX_ROW][MAX_COL]);
void printMatrix(const double mat[MAX_ROW][MAX_COL]);


#endif // 
