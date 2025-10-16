#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    int m[n][n];

    for (int i = 0; i < n; i++) {
        cout << "Введите строку " << i+1 << endl;
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    // Отражение относительно главной диагонали
    int main[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i < j) {main[i][j] = m[i][j];}
            else {main[i][j] = m[j][i];}
        }
    }

    cout << "\nОтражение матрицы относительно главной диагонали:";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << main[i][j] << " ";
        }
    }


    // Отражение относительно побочной диагонали
    int alt[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (n-i-1 >= j) {alt[i][j] = m[i][j];}
            else {alt[i][j] = m[n-j-1][n-i-1];}
        }
    }

    cout << "\nОтражение матрицы относительно побочной диагонали:";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << alt[i][j] << " ";
        }
    }

    // Отражение относительно вертикали
    int vert[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= n/2) {vert[i][j] = m[i][j];}
            else {vert[i][j] = m[i][n-j-1];}
        }
    }

    cout << "\nОтражение матрицы относительно вертикали:";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << vert[i][j] << " ";
        }
    }

    // Отражение относительно горизонтали
    int hor[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= n/2) {hor[i][j] = m[i][j];}
            else {hor[i][j] = m[n-1-i][j];}
        }
    }

    cout << "\nОтражение матрицы относительно горизонтали:";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < n; j++) {
            cout << hor[i][j] << " ";
        }
    }

    int cnt_1 = 0;
    int cnt_2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (main[i][j] == alt[i][j]) {cnt_1++;}
            if (vert[i][j] == hor[i][j]) {cnt_2++;}
        }
    }
    cout << "\n" << cnt_1 << "  " << cnt_2 << endl;
    if (cnt_1 == 9) {cout << "Отрожение матрицы относительно главной диагонали совпадает с отражением относительно побочной" << endl;}
    else {cout << "Отрожение матрицы относительно главной диагонали не совпадает с отражением относительно побочной" << endl;}

    if (cnt_2 == 9) {cout << "Отрожение матрицы относительно вертикали совпадает с отражением относительно горизонтали" << endl;}
    else {cout << "Отрожение матрицы относительно вертикали не совпадает с отражением относительно горизонтали" << endl;}

    return 0;
}