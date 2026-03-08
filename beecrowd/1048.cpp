#include <bits/stdc++.h>

using namespace std;


int main() {

    double salario, novoSalario, aumento, percentual;
    
    cin >> salario;
    
    if (salario <= 400) {
        percentual = 15;
    }
    else if (salario <= 800) {
        percentual = 12;
    }
    else if (salario <= 1200) {
        percentual = 10;
    }
    else if (salario <= 2000) {
        percentual = 7;
    }
    else {
        percentual = 4;
    }
    
    aumento = percentual * salario / 100;
    
    novoSalario = salario + aumento;
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novoSalario << '\n';
    cout << "Reajuste ganho: " << aumento << '\n';
    cout << fixed << setprecision(0) << "Em percentual: " << percentual << " %" << '\n';
    
    
    return 0;
}