#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Ваш код:
int num, sum = 0;
cin >> num;
while (num != 0) {
    sum += num;
    cin >> num;
}
    cout << sum;
    return 0;
}