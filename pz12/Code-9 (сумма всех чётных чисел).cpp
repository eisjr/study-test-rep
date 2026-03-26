#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a; cin >> a;
    int sum;
    for (int i = 2; i <= a; i += 2) {
        sum += i;
    }
    cout << sum;
    return 0;
}