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

    auto max_it = [arr](){return max_element(arr.begin(), arr.end());};
    auto min_it = [arr](){return min_element(arr.begin(), arr.end());};
    auto mid_arifm = [arr](){return accumulate(arr.begin(), arr.end(), 0.0) / 20;};
    sort(arr.begin(), arr.end());
    auto median = (arr[9] + arr[10]) / 2;

    cout << "\n\n     Статистика по данным:" << endl;
    cout << "Максимальный элемент вектора: " << *max_it() << endl;
    cout << "Минимальный элемент вектора: " << *min_it() << endl;
    cout << "Среднее арифметическое вектора: " << mid_arifm() << endl;
    cout << "Медиана вектора: " << median << endl;

    return 0;
}