#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    if (num % 3 == 0 && num % 5 == 0) {std::cout << "Число " << num << " делится и на 3, и на 5." << std::endl;}
    else if (num % 3 == 0 && num % 5 != 0) {std::cout << "Число " << num << " делится на 3, и не делится на 5." << std::endl;}
    else if (num % 3 != 0 && num % 5 == 0) {std::cout << "Число " << num << " не делится на 3, и делится на 5." << std::endl;}
    else {std::cout << "Число " << num << " не делится ни на 3, ни на 5." << std::endl;}
    return 0;
}