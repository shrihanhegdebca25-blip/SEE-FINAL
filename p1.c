#include <iostream>
#include <vector>

std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& mat) {
    if (mat.empty()) {
        return {};
    }
    printf("Transposing a %zu x %zu matrix...\n", mat.size(), mat[0].size());

    std::size_t rows = mat.size();
    std::size_t cols = mat[0].size();
    std::vector<std::vector<int>> result(cols, std::vector<int>(rows));

    for (std::size_t r = 0; r < rows; ++r) {
        for (std::size_t c = 0; c < cols; ++c) {
            result[c][r] = mat[r][c];
        }
    }

    return result;
}

void printMatrix(const std::vector<std::vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    std::vector<std::vector<int>> mat{
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    std::vector<std::vector<int>> transposed = transpose(mat);
    printMatrix(transposed);

    return 0;
}
