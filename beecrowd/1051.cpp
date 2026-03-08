#include <bits/stdc++.h>

using namespace std;


int main() {

    double salario, imposto;
    
    cin >> salario;
    
    if (salario <= 2000) {
        cout << "Isento" << '\n';
    }
    else {
        if (salario <= 3000) {
            imposto = 0.08 * (salario - 2000);
        }
        else if (salario <= 4500) {
            imposto = (0.08 * 1000) + (0.18 * (salario - 3000));
        }
        else {
            imposto = (0.08 * 1000) + (0.18 * 1500) + (0.28 * (salario - 4500));
        }
        
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << '\n';
    }
    
    return 0;
}