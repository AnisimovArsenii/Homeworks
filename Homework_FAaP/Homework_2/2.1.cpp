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
    
    int k = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] > pow(2, j)) {k++;}
    }

    std::cout << "В массиве " << k << " элементов, удовлетворяющих условию задачи." << std::endl;
    
    return 0;
}