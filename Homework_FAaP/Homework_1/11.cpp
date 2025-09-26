#include <iostream>

int main() {
    char sym;
    for (int i = 32; i <= 126; i++) {
        sym = i;
        std::cout << i << ": '" << sym << "'" << std::endl;
    }
    return 0;
}