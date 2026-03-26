#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a; cin >> a;
    int col = 0;
    while ((a / 10) != 0) {
        col++;
        a = a/ 10;
    } 
    cout << col + 1;
    
    return 0;
}