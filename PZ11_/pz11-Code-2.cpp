#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;

    return 0;
}