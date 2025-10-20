#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<float> temp;
    int n;

    cout << "Введите количество температур: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        float elem;
        cout << "Введите " << i+1 << " элемент вектора:";
        cin >> elem;
        temp.push_back(elem);
    }

    temp.erase(remove_if(temp.begin(), temp.end(), [](int x){return x >= 50 || x <= -50;}), temp.end());

    auto max_it = [temp](){return max_element(temp.begin(), temp.end());};
    auto min_it = [temp](){return min_element(temp.begin(), temp.end());};
    auto mid_arifm = [temp](){return accumulate(temp.begin(), temp.end(), 0.0) / temp.size();};
    
    cout << "\n\n     Статистика по данным:" << endl;
    cout << "Температуры, не превосходящие 50 по модулю:" << endl;
    for (int x : temp) cout << x << " ";
    cout << "\nМаксимальная темепратура: " << *max_it() << endl;
    cout << "Минимальная температура: " << *min_it() << endl;
    cout << "Среднее арифметическое температур: " << mid_arifm() << endl;
    if(*min_it() > -10) {
        cout << "Все температуры превосходят -10" << endl;
    } else {
        cout << "Не все температуры превосходят -10" << endl;
    }
    

    return 0;
}