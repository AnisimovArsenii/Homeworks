#include <iostream>
#include <cmath>

int main() {
    int n = 15;
    std::cout << "Введите " << n << " элементов: " << std::endl;

    double arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int id_mn = 0, id_mx = 0;
    double long mn = arr[0];
    double long mx = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
            id_mn = i;
        }
        else if (arr[i] > mx) {
            mx = arr[i];
            id_mx = i;
        }
    }
    
    if (id_mn == 1 && id_mx == 0) {
        std::cout << "Условие выполнено! Измененный массив: " << std::endl;

        for (int i = 0; i < n; i++)
        if (arr[i] > 0) {std::cout << arr[i] / 2 << " ";}
        else {std::cout << arr[i] * 2 << " ";}
    }

    else {std::cout << "Условие не выполнено.";}

    return 0;
}