#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;   
    }
    cout << sum;
    return 0;
}