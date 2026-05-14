#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {

    int rows = mat.size();        
    int cols = mat[0].size();    
    
    // Create a result matrix of size 
    // cols x rows for the transpose
    vector<vector<int>> tMat(cols, vector<int>(rows));

    // Fill the transposed matrix
    // by swapping rows with columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            // Assign transposed value
            tMat[j][i] = mat[i][j];  
        }
    }

    return tMat;  
}

int main() {
    vector<vector<int>> mat = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };

    vector<vector<int>> res = transpose(mat);


    for (auto& row : res) {
        for (auto& elem : row) {
            cout << elem << ' ';  
        }
        cout << "\n";  
    }

    return 0;
}