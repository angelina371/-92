#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = -2, b = 4;
    int k;
    cout << "Введіть k: ";
    cin >> k;

    double h = (b - a) / k;
    cout << "Таблиця значень функції :" << endl;
    cout << "x\t\ty" << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double y = sqrt(fabs(x * x - 1)) / pow(3, x * x - 1);
        cout << x << "\t" << y << endl;
    }

    return 0;
}