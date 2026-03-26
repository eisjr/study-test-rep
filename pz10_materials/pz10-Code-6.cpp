#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    int fac = 1;
    for (int i = 1; i <= N; i++) {
        fac = fac * i;
    }
    cout << fac;
    return 0;
}