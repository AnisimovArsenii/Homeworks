#include <iostream>

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        std::cout << "Введите координату X точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][0];
        std::cout << "Введите координату Y точки " << i+1 << ": " << std::endl;
        std::cin >> arr[i][1];
    }

    double vector_prod = (((arr[1][0] - arr[0][0]) * (arr[2][1] - arr[0][1])) - ((arr[2][0] - arr[0][0]) * (arr[1][1] - arr[0][1])));
    
    if (vector_prod == 0) {std::cout << "Точки лежат на одной прямой." << std::endl;}
    else {std::cout << "Точки не лежат на одной прямой." << std::endl;}

    return 0;
}