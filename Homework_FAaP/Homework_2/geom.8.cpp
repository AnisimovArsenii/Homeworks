#include <iostream>
#include <cmath>

int main() {
    int arr[2][2];

    for (int i = 0; i < 2; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    double len = sqrt(pow(arr[1][0] - arr[0][0], 2) + pow(arr[1][1] - arr[0][1], 2));

    std::cout << "Расстояние между точками равно " << len << std::endl;

    return 0;
}