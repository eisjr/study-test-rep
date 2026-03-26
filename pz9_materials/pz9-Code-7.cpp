#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;
    int op;
    cin >> a >> b >> op;

    // Ваш код:
    switch (op) 
    {
        case 1: cout << a + b << endl; break; // сложение
        case 2: cout << a - b << endl; break; // вычитание
        case 3: cout << a * b << endl; break; // умножение
        case 4: { 
            if (b != 0 ) { cout << a / b << endl; break; }
            else
                cout << "Деление на ноль" << endl; break;
        }
        default: cout << "Ошибка" << endl; break;
    }

    return 0;
}