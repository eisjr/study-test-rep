#include <iostream>
#include <random>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");


    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    int rand = dist(gen);

    int i = 0;
    while (rand != i) {
        cin >> i;
        if (i > rand) {
            cout << "меньше" << endl;
        }
        if (i < rand) {
            cout << "больше" << endl;
        }
    }
    cout << "Победа" << endl;

    return 0;
}