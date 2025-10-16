#include <iostream> 
#include <cmath>

int main() {
    int dot[2];
    float theta;

    std::cout << "Введите координаты точки: \n";
    for (int i = 0; i < 2; i++) {std::cin >> dot[i];}

    std::cout << "Введите угол поворота: ";
    std::cin >> theta;

    theta = theta * M_PI / 180;

    float trn[2][2] = {
        {cos(theta), sin(theta)},
        {-sin(theta), cos(theta)}
    };

    float x1 = (trn[0][0] * dot[0] + trn[0][1] * dot[1]);
    float y1 = (trn[1][0] * dot[0] + trn[1][1] * dot[1]);
    
    std::cout << "Координаты новой точки: \n" << x1 << "    " << y1;
    return 0;
}