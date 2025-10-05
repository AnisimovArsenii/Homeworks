#include <iostream>



double k (double a[2][2]) {
    double k;
    if ((a[0][1] < a[1][1])) {
        k = (a[1][1] - a[0][1]) / (a[1][0] - a[0][0]);
    }
    else if ((a[0][1] > a[1][1])) {
        k = - (a[1][1] - a[0][1]) / (a[1][0] - a[0][0]);
    }
    else if ((a[0][1] == a[1][1])) {
        k = 0;
    }
    return k;
    }




int main() {
    double o1[2][2];
    double o2[2][2];

    for (int i = 0; i < 2; i++) {
        std::cout << "Введите координату X точки " << i+1 << " первого отрезка: " << std::endl;
        std::cin >> o1[i][0];
        std::cout << "Введите координату Y точки " << i+1 << " первого отрезка: " << std::endl;
        std::cin >> o1[i][1];
    }
    for (int i = 0; i < 2; i++) {
        std::cout << "Введите координату X точки " << i+1 << " второго отрезка: " << std::endl;
        std::cin >> o2[i][0];
        std::cout << "Введите координату Y точки " << i+1 << " второго отрезка: " << std::endl;
        std::cin >> o2[i][1];
    }

    int flag = 0;
    
    std::cout << k(o1) << "  " << k(o2) << std::endl;
    return 0;
}