#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    for (int i = 1; i <= num; i++) {
        int sqrt = i*i;
        std::cout << "Квадратом числа " << i << " является число " << sqrt << "." << std::endl;
    }
    return 0;
}