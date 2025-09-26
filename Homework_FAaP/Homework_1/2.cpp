#include <iostream>

int main() {
    int len, wid;
    std::cout << "Введите длину прямоугольника: ";
    std::cin >> len;
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> wid;
    int sqr = (len * wid);
    std::cout << "\n" << "Площадь прямоугольника равна " << sqr << std::endl;
    return 0;
}