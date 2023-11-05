#include <iostream>
#include <ctime>



int main() {
    const int rows1 = 5;
    const int cols1 = 10;
    const int rows2 = 5;
    const int cols2 = 5;

    int arr1[rows1][cols1];
    int arr2[rows2][cols2];


   srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            arr1[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
        }
    }

    std::cout << "First Array:" << std::endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Second Array:" << std::endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
