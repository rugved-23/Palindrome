#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();       
    int m = A[0].size();     
    int p = B[0].size();     
    vector<vector<int>> C(n, vector<int>(p, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}
void displayMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    if (A[0].size() != B.size()) {
        cout << "Matrix multiplication not possible. Number of columns in A must equal number of rows in B." << endl;
        return 1;
    }
    vector<vector<int>> C = multiplyMatrices(A, B);
    cout << "Matrix A:" << endl;
    displayMatrix(A);
    cout << "\nMatrix B:" << endl;
    displayMatrix(B);
    cout << "\nResultant Matrix C = A × B:" << endl;
    displayMatrix(C);
    return 0;
}
