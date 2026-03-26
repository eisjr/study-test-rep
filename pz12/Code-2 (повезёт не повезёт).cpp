#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a; cin >> a;
    if (a % 2 == 0) {
        cout << "Сегодня повезёт" << endl;
    }
    else
        cout << "Лучне не рисковать" << endl;

    return 0;
}