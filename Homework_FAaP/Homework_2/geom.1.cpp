#include <iostream>

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    double S = 0.5 * (arr[0][0] * (arr[1][1] - arr[2][1]) + arr[1][0] * (arr[2][1] - arr[0][1]) + arr[2][0] * (arr[0][1] - arr[1][1]));
    
    if (S > 0) {std::cout << "Площадь треугольника равна: " << S << std::endl;}
    else if (S == 0) {std::cout << "Ошибка, фигура не является треугольником." << std::endl;}
    else if (S < 0) {std::cout << "Площадь треугольника равна: " << -1 * S << std::endl;}

    return 0;
}