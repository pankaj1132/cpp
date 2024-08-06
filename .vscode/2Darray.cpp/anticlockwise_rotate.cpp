#include <iostream>

const int N = 4; // Change this to the size of your array

void rotateArray(int arr[N][N]) {
    // Transpose the matrix
    for (int j = 0; j< N; ++j) {
        for (int i = j; i < N; ++i) {
            std::swap(arr[j][i], arr[i][j]);
        }
    }

    // Reverse each row
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i< N / 2; ++i) {
            std::swap(arr[j][i], arr[j][N - 1 - i]);
        }
    }
}

void printArray(int arr[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    std::cout << "Original array:" << std::endl;
    printArray(arr);

    rotateArray(arr);

    std::cout << "\nArray after 90-degree anti-clockwise rotation:" << std::endl;
    printArray(arr);

    return 0;
}
