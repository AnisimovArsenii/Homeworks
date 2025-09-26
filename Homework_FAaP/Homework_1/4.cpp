#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    if ((num % 2) == 0) {std::cout << "Число " << num << " является четным." << std::endl;}
    else {std::cout << "Число " << num << " является нечетным." << std::endl;}
    return 0;
}