#include <iostream>
#include <cmath>

int main() {
    int n = 4;
    int arr[n][2];

    for (int i = 0; i < n; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    // запишем в P расстояние от последней точки до первой, а дальше будем прибавлять 
    //расстояния от первой к второй, от второй к третьей и т.д.
    double P = sqrt(pow((arr[3][0] - arr[0][0]), 2) + pow((arr[3][1] - arr[0][1]), 2));

    for (int i = 0; i < n-1; i++) {
        P += sqrt(pow((arr[i][0] - arr[i+1][0]), 2) + pow((arr[i][1] - arr[i+1][1]), 2));
    }

    std::cout << "Периметр фигуры равен " << P << std::endl;

    return 0;
}