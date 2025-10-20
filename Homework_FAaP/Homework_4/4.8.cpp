#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<float> spd;

    float elem = 0;
    for(int i = 0; i < 50; i++) {
        elem += 3.6;
        spd.push_back(elem);
    }

    spd.erase(remove_if(spd.begin(), spd.end(), [](int x){return x > 120;}), spd.end());

    auto min_it = [spd](){return min_element(spd.begin(), spd.end());};
    auto mid_speed = [spd](){return accumulate(spd.begin(), spd.end(), 0.0) / spd.size();};
    
    sort(spd.begin(), spd.end());
    reverse(spd.begin(), spd.end());

    cout << "\n\n     Статистика по данным:" << endl;
    cout << "\nСредняя скорость: " << mid_speed() << endl;
    if(*min_it() > 0) {
        cout << "\nАвтомобиль всегда был в движении" << endl;
    } else {
        cout << "\nАвтомобиль не всегда был в движении" << endl;
    }
    cout << "\n10 самых высоких скоростей: " << endl;
    for (int i; i < 10; i++) {
        cout << spd[i] << " ";
    }
    
    return 0;
}