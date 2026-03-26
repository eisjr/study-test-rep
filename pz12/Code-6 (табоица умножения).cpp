#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n; cin >> n;
    int c;
    
    for (int i = 1; i <= n; i++) {
        c = i;
        for (int j = 1; j <= n; j++) {
            cout << c << " ";
            c += i;
        }
        cout << endl;
    }
    
    return 0;
}