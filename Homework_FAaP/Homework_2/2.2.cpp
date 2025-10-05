#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cout << "Ведите количество элементов массива: ";
    std::cin >> n;
    std::cout << "Введите " << n << " элементов: " << std::endl;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int mx = -10000000;
    int k = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] % 2 == 1) {
            if (arr[j] > mx) {mx = arr[j];}
        }
        else {k++;}
    }

    std::cout << "В массиве " << k << " четных элементов, а максимальный нечетный элемент: " << mx << std::endl;
    
    return 0;
}