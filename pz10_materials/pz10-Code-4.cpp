#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    for (int i = 2; i <= N; i = i + 2) {
         cout << i << " ";   
    }

    return 0;
}