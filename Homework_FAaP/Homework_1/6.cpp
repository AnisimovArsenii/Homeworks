#include <iostream>

int main() {
    int age;
    std::cout << "Введите свой возраст: ";
    std::cin >> age;
    if (age < 18) {std::cout << "Ваш возраст ниже 18 лет.";}
    else if (age >= 18 && age <= 60) {std::cout << "Ваш возраст от 18 до 60 лет.";}
    else {std::cout << "Ваш возраст выше 60 лет.";}
    return 0;
}