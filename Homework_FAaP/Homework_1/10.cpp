#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    if (num > 0) {std::cout << "Число больше нуля.";}
    else if (num < 0) {std::cout << "Число меньше нуля.";}
    else {std::cout << "Число равно нулю";}
    return 0;
}