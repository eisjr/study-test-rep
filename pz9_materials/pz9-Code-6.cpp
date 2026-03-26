#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    switch (n) 
    {
        case 0: cout << "Ноль" << endl; break;
        case 1: cout << "Один" << endl; break;
        case 2: cout << "Два" << endl; break;
        case 3: cout << "Три" << endl; break;
        case 4: cout << "Четыре" << endl; break;
        case 5: cout << "Пять" << endl; break;
        case 6: cout << "Шесть" << endl; break;
        case 7: cout << "Семь" << endl; break;
        case 8: cout << "Восемь" << endl; break;
        case 9: cout << "Девять" << endl; break;
        default: cout << "Ошибка" << endl; break;
    }

    return 0;
}