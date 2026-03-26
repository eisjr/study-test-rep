#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n; cin >> n;
    
    bool simp = false;
    float a = sqrt(n);

    // Ваш код:
    
    if (n <= 3) simp =  true;
    else 
    {
        int i = 2;
        while (i <= a) 
        {
            if (n % i == 0) { simp = false; break; }
            else { simp = true ; }
            //a % b == 0
            i++;
        }
    }
    
    if (n == 1) simp = false; 
    
    if (simp == true) { cout << "Простое"; }
    else if (simp == false) { cout << "Не простое"; }

    return 0;
}