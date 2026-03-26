#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    int col = 0;
    for (int i = 2; i <= N; i = i + 2) {
        col++; 
    }
    cout << col;
    return 0;
}