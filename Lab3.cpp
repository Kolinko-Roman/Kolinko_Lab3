#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Введіть кількість чисел Фібоначчі, які потрібно вивести: ";
    cin >> n;
    if (n <= 0) {
        cout << "Введіть додатнє число!" << endl;
        return 1;
    }
    int a = 0, b = 1, c = 0, d = 1;
    cout << "Перші " << n << " чисел Фібоначчі: ";
    while (d <= n) {
        if (d == 2) {
            cout << b << " ";
        } else {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
        d++;
    }
    return 0;
}

