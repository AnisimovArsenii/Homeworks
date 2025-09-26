#include <iostream>

int main() {
    double len_cm;
    std::cout << "Введите длину в сантиметрах: ";
    std::cin >> len_cm;
    int len_m = (len_cm / 100);
    int len_res = (len_cm - (len_m * 100));
    std::cout << "\n" << "Длина в метрах: " << len_m << std::endl;
    std::cout << "Оставшиеся сантиметры: " << len_res << std::endl;
    return 0;
}