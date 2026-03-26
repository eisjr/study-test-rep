#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    int c = 0;
    while (true)
    {
        if (n % 10 != 0) {
            n = n / 10;
            c += 1;
        }
        else
            break;
    }
    cout << c;

    return 0;
}