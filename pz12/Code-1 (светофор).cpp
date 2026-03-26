#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int light;
    cin >> light;
    
    switch (light) {
        case 1: cout << "Стой" << endl; break;
        case 2: cout << "Готовься" << endl; break;
        case 3: cout << "Иди" << endl; break;
        default: cout << ""<< endl;
    }

    return 0;
}