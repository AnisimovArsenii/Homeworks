#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double matrix[4][5];

    for (int i = 0; i < 4; i++) {
        double sq = 0;
        cout << "Введите координаты X, Y и Z точки " << i+1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            sq += pow(matrix[i][j], 2);
        }
        matrix[i][3] = 1;
        matrix[i][4] = sq;
    }

        for (int i = 0; i < 4; i++) {
        double max_element = fabs(matrix[i][i]);
        int max_row = i;
        for (int k = i + 1; k < 4; k++) {
            if (fabs(matrix[k][i]) > max_element) {
                max_element = fabs(matrix[k][i]);
                max_row = k;
            }
        }
        
        for (int k = i; k < 5; k++) {
            double temp = matrix[i][k];
            matrix[i][k] = matrix[max_row][k];
            matrix[max_row][k] = temp;
        }
        
        for (int k = i + 1; k < 4; k++) {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j < 5; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    double answer[4];
    for (int i = 5; i >= 0; i--) {
        answer[i] = matrix[i][4];
        for (int j = i + 1; j < 4; j++) {
            answer[i] -= matrix[i][j] * answer[j];
        }
        answer[i] /= matrix[i][i];
    }
    
    double A = answer[0];
    double B = answer[1];
    double C = answer[2];
    double D = answer[3];
    double x0 = -A / 2;
    double y0 = -B / 2;
    double z0 = -C / 2;

    double r = sqrt(x0*x0 + y0*y0 + z0*z0 - D);
    

    cout << "Коэффициенты уравнения сферы:" << endl;
    cout << "A: " << A << ", B: " << B << ", С: " << C << ", D: " << D << endl;
    
    cout << "\nУравнение сферы в развернутом виде:" << endl;
    cout << "x^2 + y^2 + z^2 + " << A << "x + " << B << "y + " << C << "z + " << D << " = 0" << endl;
    
    cout << "\nКоординаты центра сферы:" << endl;
    cout << "x0: " << x0 << ", y0: " << y0 << ", z0: " << z0 << endl;
    
    cout << "\nРадиус сферы:" << r << endl;

    cout << "\nУравнение сферы в стандартном виде:" << endl;
    cout << "(x " << (x0 >= 0 ? "- " : "+ ") << fabs(x0) << ")^2 + (y " << (y0 >= 0 ? "- " : "+ ") << fabs(y0) << ")^2 + z " << (z0 >= 0 ? "- " : "+ ") << fabs(z0) << ")^2 = " << (r*r) << endl;
    

}