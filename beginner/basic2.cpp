#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     double R;

     cin >> R;

     cout << fixed;
     cout << "A=" << setprecision(4) << (3.14159*R*R) << '\n';
 
    return 0;
}

