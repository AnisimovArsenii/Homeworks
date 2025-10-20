#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> arr;
    for(int i = 0; i < 10; i++) {
        float elem;
        cout << "Введите " << i+1 << " элемент вектора: ";
        cin >> elem;
        arr.push_back(elem);
    }
    cout << "\n";
    std::for_each(arr.begin(), arr.end(), [](float x){ std::cout << "Удвоенный элемент: " << x*2 << "\n"; });
    return 0;
}