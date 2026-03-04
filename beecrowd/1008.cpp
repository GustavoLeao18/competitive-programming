#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, horas;
    double valor, salario;
    
    cin >> num >> horas >> valor;
    
    salario = horas * valor;
    
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num << '\n';
    cout << "SALARY = U$ " << salario << '\n';

    return 0;
}