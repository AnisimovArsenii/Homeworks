#include <iostream>

int main() {
    int n = 15;
    int arr[n];

    std::cout << "Введите " << n << " элементов: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int id_mn = 0, id_mx = 0;
    int mx = arr[0], mn = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
            id_mx = i;
        }
        else if (arr[i] < mn) {
            mn = arr[i];
            id_mn = i;
        }
    }

    if (mn == 0 || mx == 0) {
        std::cout << "Условие выполнено!" << std::endl << "Измененный массив:" << std::endl;
        for (int i = 0; i < n; i++) {
            if (i < id_mn) {
                arr[i] = 0;
                std::cout << arr[i] << " ";
            }
            else {
                std::cout << arr[i] << " ";
            }
        }
    }
    else {
        std::cout << "Условие не выполнено." << std::endl;
    }
    return 0;
}