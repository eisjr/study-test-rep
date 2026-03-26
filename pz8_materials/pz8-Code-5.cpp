#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:
    
    if (!(number >= 1 && number <= 10))
        cout << "Число не принадлежит диапазону" << endl;
    else
        cout << "Число принадлежит диапазону" << endl;
    
    return 0;
}