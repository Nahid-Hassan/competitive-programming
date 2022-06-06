#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };

    for (int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    /* filling first row and first column */
    /* row */
    for (int i = 1; i < matrix[0].size(); i++) {
        matrix[0][i] = matrix[0][i-1] + matrix[0][i];
    }
    /* col */
    for (int i = 1; i < matrix.size(); i++) {
        matrix[i][0] = matrix[i-1][0] + matrix[i][0];
    }

    /* calculate prefix sum for 2-d array or vector */
    for (int i = 1; i < matrix.size(); i++) {
        for (int j = 1; j < matrix[i].size(); j++) {
            matrix[i][j] += matrix[i][j-1] + matrix[i-1][j] - matrix[i-1][j-1];
        }
    }

    for (int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
