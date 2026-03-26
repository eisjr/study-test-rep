#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int c; cin >> c;
    if (c < 0) {
        cout << "Мороз" << endl;
    }
    else if (c >= 0 && c <= 20) {
        cout << "Прохладно" << endl;
    }
    else if (c > 20 && c <= 30) {
        cout << "Тепло" << endl;
    }
    else if (c > 30) {
        cout << "Жара" << endl;
    }


    return 0;
}