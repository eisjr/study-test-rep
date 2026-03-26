#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
  
    int i = 1;
    
    while (i <= n) {
        int j = 1;
        int c = i;
        while (j <= n) {
            cout << c << ' ';
            c = c + i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}