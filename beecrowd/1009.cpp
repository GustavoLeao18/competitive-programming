#include <bits/stdc++.h>

using namespace std;

int main() {

    string nome;
    double salarioFixo, totalV, salarioFinal;
    
    cin >> nome >> salarioFixo >> totalV;
    
    salarioFinal = (0.15 * totalV) + salarioFixo;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salarioFinal << '\n';

    return 0;
}