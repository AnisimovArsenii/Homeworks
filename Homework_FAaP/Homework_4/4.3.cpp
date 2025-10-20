#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> arr;
    for(int i = 0; i < 20; i++) {
        float elem;
        cout << "Введите " << i+1 << " элемент вектора:";
        cin >> elem;
        arr.push_back(elem);
    }

    auto max_it = [arr](){return max_element(arr.begin(), arr.end());};
    cout << "Максимальный элемент вектора: " << *max_it() << endl;
    return 0;
}