#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<float> arr;
    for(int i = 0; i < 20; i++) {
        float elem;
        cout << "Введите " << i+1 << " элемент вектора:";
        cin >> elem;
        arr.push_back(elem);
    }

    auto is_7_in = find(arr.begin(), arr.end(), 7);
    if (is_7_in != arr.end()) {
        cout << "\nЧисло 7 найдено в векторе." <<endl;
    } else {
        cout << "\nЧисло 7 не найдено в векторе." << endl;
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    cout << "\nВектор после удаления повторяющихся элементов:" << endl;
    for (int x : arr) cout << x << " ";
    return 0;
}