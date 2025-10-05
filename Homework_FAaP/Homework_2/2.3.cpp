#include <iostream>
#include <cmath>

int main() {
    int n = 15;
    std::cout << "Введите " << n << " элементов: " << std::endl;

    double arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int id_mn, id_mx;
    double mn = 10000000;
    double mx = -10000000;
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

    arr[id_mn] = arr[0];
    arr[0] = mn;

    arr[id_mx] = arr[14];
    arr[14] = mx;

    std::cout << "Измененный массив: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}