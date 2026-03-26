#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;
    cin >> a; cin >> b;

    string c;
    cin >> c;

    if (c == "+") {
        cout << a + b;
    }
    else if (c == "-") {
        cout << a - b;
    }
    else if (c == "*") {
        cout << a * b;
    }
    else if (c == "/" || c == ":") {
        if (b == 0) {
            cout << "на ноль делить нельзя" << endl;
        }
        else
            cout << a / b;
    }


    return 0;
}