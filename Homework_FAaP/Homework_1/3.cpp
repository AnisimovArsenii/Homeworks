#include <iostream>

int main() {
    double cel;
    std::cout << "Ведите температуру в градусах Цельсия: ";
    std::cin >> cel;
    double far = (cel * 9 / 5 + 32);
    std::cout << "\n" << "Температура в градусах Фарингейта равна " << far << std::endl;
    return 0;
}