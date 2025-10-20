#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> random;

    for (int i = 0; i < 10; i++) {
        float it;
        cout << "Введите " << i+1 << " элемент вектора: ";
        cin >> it;
        random.push_back(it);
    }

    random.erase(std::remove_if(random.begin(), random.end(), [](float x){return x < 0;}), random.end());
    cout << "\nВектор, после удаления отрицательных: " << endl;
    for (float x : random) cout << x << " ";
    return 0;
}