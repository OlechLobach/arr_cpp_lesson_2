#include <iostream>
#include <ctime>

int main() {
    const int rows = 2;
    const int cols = 6;
    int arr[rows][cols];

 
    std::srand(static_cast<unsigned>(std::time(nullptr)));

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = std::rand() % 10; 
        }
    }

    std::cout << "Initial array:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    int shiftAmount, direction;
    std::cout << "Enter the number of shifts: ";
    std::cin >> shiftAmount;
    std::cout << "Enter the shift direction (1 - right, 2 - left, 3 - up, 4 - down): ";
    std::cin >> direction;

    
    for (int s = 0; s < shiftAmount; s++) {
        if (direction == 1) { 
            for (int i = 0; i < rows; i++) {
                int temp = arr[i][cols - 1];
                for (int j = cols - 1; j > 0; j--) {
                    arr[i][j] = arr[i][j - 1];
                }
                arr[i][0] = temp;
            }
        }
        else if (direction == 2) {
            for (int i = 0; i < rows; i++) {
                int temp = arr[i][0];
                for (int j = 0; j < cols - 1; j++) {
                    arr[i][j] = arr[i][j + 1];
                }
                arr[i][cols - 1] = temp;
            }
        }
        else if (direction == 3) { 
            for (int j = 0; j < cols; j++) {
                int temp = arr[0][j];
                for (int i = 0; i < rows - 1; i++) {
                    arr[i][j] = arr[i + 1][j];
                }
                arr[rows - 1][j] = temp;
            }
        }
        else if (direction == 4) { 
            for (int j = 0; j < cols; j++) {
                int temp = arr[rows - 1][j];
                for (int i = rows - 1; i > 0; i--) {
                    arr[i][j] = arr[i - 1][j];
                }
                arr[0][j] = temp;
            }
        }
    }

    std::cout << "Shifted array:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
