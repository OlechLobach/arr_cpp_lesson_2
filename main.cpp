#include <iostream>
#include <ctime> 

    int main() {
        const int rows = 3;
        const int cols = 4;

        int arr[rows][cols];


        std::srand(static_cast<unsigned>(std::time(nullptr)));


        std::cout << "Randomly generated array:" << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = std::rand() % 100;
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }

        int sum = 0;
        int minElement = arr[0][0];
        int maxElement = arr[0][0];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum += arr[i][j];
                if (arr[i][j] < minElement) {
                    minElement = arr[i][j];
                }
                if (arr[i][j] > maxElement) {
                    maxElement = arr[i][j];
                }
            }
        }

        double average = static_cast<double>(sum) / (rows * cols);

        std::cout << "Sum of elements: " << sum << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "Minimum element: " << minElement << std::endl;
        std::cout << "Maximum element: " << maxElement << std::endl;

        return 0;
    }
