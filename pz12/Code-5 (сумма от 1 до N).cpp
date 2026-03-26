#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n; cin >> n;
    int sum;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum;
    
    return 0;
}