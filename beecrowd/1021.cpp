#include <bits/stdc++.h>

using namespace std;

int main() {

    int cont100, cont50, cont20, cont10, cont5, cont2, cont1, cont05, cont025, cont01, cont005, cont001;
    double n, x;
    
    cin >> n;

    x = (n - (int) n) * 100;
    
    cont100 = n / 100;
    n = (int) n % 100;
    
    cont50 = n / 50;
    n = (int) n % 50;
    
    cont20 = n / 20;
    n = (int) n % 20;
    
    cont10 = n / 10;
    n = (int) n % 10;
    
    cont5 = n / 5;
    n = (int) n % 5;
    
    cont2 = n / 2;
    n = (int) n % 2;
    
    cont1 = n;
    
    cont05 = x / 50;
    x = (int) x % 50;
    
    cont025 = x / 25;
    x = (int) x % 25;
    
    cont01 = x / 10;
    x = (int) x % 10;
    
    cont005 = x / 5;
    x = (int) x % 5;
    
    cont001 = x;
    
    cout << "NOTAS:" << '\n';
    cout << cont100 << " nota(s) de R$ 100.00" << '\n';
    cout << cont50 << " nota(s) de R$ 50.00" << '\n';
    cout << cont20 << " nota(s) de R$ 20.00" << '\n';
    cout << cont10 << " nota(s) de R$ 10.00" << '\n';
    cout << cont5 << " nota(s) de R$ 5.00" << '\n';
    cout << cont2 << " nota(s) de R$ 2.00" << '\n';
    
    cout << "MOEDAS:" << '\n';
    cout << cont1 << " moeda(s) de R$ 1.00" << '\n';
    cout << cont05 << " moeda(s) de R$ 0.50" << '\n';
    cout << cont025 << " moeda(s) de R$ 0.25" << '\n';
    cout << cont01 << " moeda(s) de R$ 0.10" << '\n';
    cout << cont005 << " moeda(s) de R$ 0.05" << '\n';
    cout << cont001 << " moeda(s) de R$ 0.01" << '\n';

    return 0;
}