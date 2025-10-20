#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    for(int i = 0; i < 10; i++) {
        int elem;
        cout << "Введите " << i+1 << " элемент вектора:";
        cin >> elem;
        arr.push_back(elem);
    }
    cout << "\n";
    std::for_each(arr.begin(), arr.end(), [](int x){ std::cout << "Элемент: " << x << "\n"; });
    return 0;
}