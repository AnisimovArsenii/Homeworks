#include <iostream>

int main() {
    int n;
    int sum = 0;
    std::cout << "Введите число 'n': ";
    std::cin >> n;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << "Сумма чисел, делящихся на 2 или на 5, от 1 до n равна " << sum <<std::endl;
    return 0;
}