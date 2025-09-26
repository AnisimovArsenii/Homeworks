#include <iostream>
#include <string>

int main() {
    int len;
    int cnt = 0;
    char sym;
    std::string vow = "aeiouAEIOU";
    std::cout << "Введите количество элементов строки: " << std::endl;
    std::cin >> len;
    std::cout << "\n" << "Введите строку по символам: " << std::endl;
    for (int i = 0; i < len; i++) {
        std::cin >> sym;
        if (vow.find(sym) != std::string::npos) {
            cnt ++;
        }
    }
    std::cout << "Количество гласных в строке: " << cnt << std::endl;
    return 0;
}