#include <iostream>
#include <fstream>

using namespace std;

const int max_size_of_matrix = 10;

void printMatrix(int matrix[][max_size_of_matrix], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main(){}
