#include <iostream>

using namespace std;

int main() {
    int a, b; // Объявляем две переменные
    cin >> a >> b; // Считываем два числа сразу

    // Ваш код:
    if (a > b)
        cout << "Большее число: " << a << endl;
    else if (b > a)
        cout << "Большее число: " << b << endl;
    else
        cout << "Числа равны";


    return 0;
}