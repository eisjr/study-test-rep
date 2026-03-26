#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a;
    int max = 0;
    cin >> a;
    while (a != 0) {
        if (a > max) {
            max = a;
        }
        cin >> max;
    }

    cout << max;
    
    return 0;
}