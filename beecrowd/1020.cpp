#include <bits/stdc++.h>

using namespace std;

int main() {

    int idade, anos, meses, dias;
    
    cin >> idade;
    
    anos = idade / 365;
    
    meses = (idade % 365) / 30;
    
    dias = (idade % 365) % 30;
    
    cout << anos << " ano(s)" << '\n';
    cout << meses << " mes(es)" << '\n';
    cout << dias << " dia(s)" << '\n';

    return 0;
}