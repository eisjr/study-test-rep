#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int i; cin >> i;
    while (i >= 1) {
        cout << i << " ";
        i--;
    }
    
    return 0;
}