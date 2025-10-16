#include <iostream>
#include <cmath>

int determinant(int matrix[3][3]) {
return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
- matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
+ matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main() {
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Введите координаты X и Y точки " << i+1 << ": \n";
        for (int j = 0; j < 2; j++) {
            std::cin >> matrix[i][j];
        }
        matrix[i][2] = 1;
    }

    float S = fabs((0.5 * determinant(matrix)));

    std::cout << "Площадь треугольника равна " << S << std::endl;
    return 0;
}