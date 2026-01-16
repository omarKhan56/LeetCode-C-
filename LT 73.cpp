#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<bool> rowZero(n, false);
        vector<bool> colZero(m, false);

        // Step 1: mark rows & columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }

        // Step 2: zero rows
        for (int i = 0; i < n; i++) {
            if (rowZero[i]) {
                for (int j = 0; j < m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: zero columns
        for (int j = 0; j < m; j++) {
            if (colZero[j]) {
                for (int i = 0; i < n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

    sol.setZeroes(matrix);  // ✅ correct call

    // Print matrix
    for (auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
