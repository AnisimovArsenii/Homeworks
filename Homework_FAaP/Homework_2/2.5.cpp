#include <iostream>
#include <cmath>

int main() {
    int n = 10;
    std::cout << "Введите " << n << " элементов: " << std::endl;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int id_mn = 0, id_mx = 0;
    int mn = arr[0];
    int mx = arr[0];
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
    
    double ans;
    if (id_mn == 4 && id_mx == 9) {
        ans = (mn + mx) / 2;
        std::cout << "Условие выполнено!" << std::endl;
        std::cout << "Среднее арифметическое минимального и максимального элементов равно " << ans << std::endl;
    }
    else {std::cout << "Условие не выполнено.";}

    return 0;
}