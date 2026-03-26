#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char op;
    int a, b;
    cin >> op >> a >> b;

    // Ваш код:
    switch (op) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/': {
        if (b != 0) {
            cout << a / b << endl; break;
        }
        else
            cout << "Деление на ноль" << endl; break;
        }
    }

    return 0;
}