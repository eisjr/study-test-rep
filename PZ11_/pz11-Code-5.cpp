#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    int i = 1;
    int F = 1;
    while (i <= n) 
    {
        F = F * i;
        i++;
    }
    cout << F;
    return 0;
}