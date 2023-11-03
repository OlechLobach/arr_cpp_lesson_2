#include<iostream>

int main() {
    const int col = 5;
    const int row = 5;
    int arr[col][row];
    int sum_rows[col]{ 0 };
    int sum_cols[row]{ 0 };

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            arr[i][j] = rand() % 10;
            sum_rows[i] += arr[i][j];
            sum_cols[j] += arr[i][j];
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << " | " << sum_rows[i] << std::endl;
    }

    std::cout << "__________________" << std::endl;

    for (int i = 0; i < row; i++) {
        std::cout << sum_cols[i] << " ";
    }
    std::cout << std::endl;

	return 0;
}