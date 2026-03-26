#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    switch (n) {
        case 1: cout << "Один" << endl; break;
        case 2: cout << "Два" << endl; break;
        case 3: cout << "Три" << endl; break;
        default: cout << "Ошибка";
    }
        

    return 0;
}