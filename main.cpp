#include <iostream>
#include <fstream>

using namespace std;

const int max_size_of_matrix = 10;

bool matricesAreEqual(int matrix1[][max_size_of_matrix], int matrix2[][max_size_of_matrix], int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (matrix1[i][j] != matrix2[i][j])
                return false;
    return true;
}