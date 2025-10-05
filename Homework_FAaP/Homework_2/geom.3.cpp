#include <iostream>

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    double Cx = (arr[0][0] + arr[1][0] + arr[2][0]) / 3;
    double Cy = (arr[0][1] + arr[1][1] + arr[2][1]) / 3;

    std::cout << "Координаты центра масс трех точек:    " << Cx << " " << Cy << std::endl;

    return 0;
}