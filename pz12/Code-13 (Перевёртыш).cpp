#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int i; cin >> i;
    string a = "";

    while (i != 0) {
        a += (i % 10) + '0';
        i = i / 10;
    }

    cout << i;

    return 0;
}