#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    switch (n) {
        case 1:
        case 2: cout << "Плохо" << endl; break;
        case 3: cout << "Удовлетворительно" << endl; break;
        case 4: cout << "Хорошо" << endl; break;
        case 5: cout << "Отлично" << endl; break;
        default: cout << "Ошибка" << endl; break;
    }

    return 0;
}