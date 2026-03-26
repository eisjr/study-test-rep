#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:
    if ((number >= 1 && number <= 5) || (number >= 10 && number <= 15))
        cout << "Число принадлежит одному из диапазонов" << endl;
    else
        cout << "Число не принадлежит указанным диапазонам" << endl;
        
    return 0;
}