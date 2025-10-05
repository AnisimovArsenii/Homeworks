#include <iostream>

int main() {
    int arr[4][2];

    for (int i = 0; i < 4; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    double D1 = sqrt(pow((arr[0][0] - arr[2][0]), 2) + pow((arr[0][1] - arr[2][1]), 2));
    double D2 = sqrt(pow((arr[1][0] - arr[3][0]), 2) + pow((arr[1][1] - arr[3][1]), 2));

    if (D1 == D2) {
        std::cout << "Диагональ прямоугольника равна: " << D1 << std::endl;
    }
    else {std::cout << "Точки введены не последовательно или фигура не является прямоугольником" << std::endl;}
    
    return 0;
}