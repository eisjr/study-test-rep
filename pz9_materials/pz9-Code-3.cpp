#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    switch (n) 
    {
        case 12:
        case 1:
        case 2: cout << "Зима" << endl; break;

        case 3:
        case 4:
        case 5: cout << "Весна" << endl; break;
            
        case 6:
        case 7:
        case 8: cout << "Лето" << endl; break;
            
        case 9:
        case 10:
        case 11: cout << "Осень" << endl; break;
            
        default: cout << "Ошибка" << endl; break;
    }

    return 0;
}