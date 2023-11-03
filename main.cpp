#include <iostream>

int main() {
    int n;
    std::cout << "Enter the initial number: ";
    std::cin >> n;

    const int rows = 3; 
    const int cols = 3;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = n;
            n *= 2;
        }
    }

 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            //не зрозумів у яку сторону повинні писатися цифри за збільшенням, с права на ліво чи з верху вниз
            //генерація цифр з верху в низ
            std::cout << arr[j][i] << " "; 


            //генерація цифр з права на ліво
               /* std::cout << arr[i][j] << " ";*/
        }
        std::cout << std::endl;
    }

    return 0;
}
