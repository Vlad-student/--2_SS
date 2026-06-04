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

bool loadFromFile(int matrix[][max_size_of_matrix], int size) {
    ifstream file("colors.txt");
    if (!file.is_open()) return false;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            matrix[i][j] = 0;

    int row = 0, col = 0;
    char ch;
    int currentNumber = 0;
    bool haveNumber = false;

    while (file.get(ch) && row < size) {
        if (ch >= '0' && ch <= '9') {
            currentNumber = currentNumber * 10 + (ch - '0');
            haveNumber = true;
        }
        else if (ch == ' ' || ch == '\t') {
            if (haveNumber) {
                matrix[row][col] = currentNumber;
                col++;
                currentNumber = 0;
                haveNumber = false;
            }
        }
        else if (ch == '\n') {
            if (haveNumber) {
                matrix[row][col] = currentNumber;
                currentNumber = 0;
                haveNumber = false;
            }
            row++;
            col = 0;
            if (row >= size) break;
        }
    }

int main(){}
