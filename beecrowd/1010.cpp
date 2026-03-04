#include <bits/stdc++.h>

using namespace std;

int main() {

    int codigo1, codigo2, quant1, quant2;
    double valor1, valor2, valorTotal;
    
    cin >> codigo1 >> quant1 >> valor1;
    cin >> codigo2 >> quant2 >> valor2;
    
    valorTotal = (quant1 * valor1) + (quant2 * valor2);
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << '\n';

    return 0;
}