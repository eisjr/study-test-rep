#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;

    // Ваш код:
    int i = 2;
    while (i <= n) 
    {
        cout << i << " ";
        i += 2;
    }

    return 0;
}