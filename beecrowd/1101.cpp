#include <bits/stdc++.h>

using namespace std;


int main() {

    int m, n, soma, troca;
    
    cin >> m >> n;
    
    
    while (m != 0 && m > 0 && n !=0 && n > 0) {
        
    if (m > n) {
        troca = m;
        m = n;
        n =  troca;
    }
    
    soma = 0;
    
        for (int i=m; i<=n; i++) {
            soma = soma + i;
            cout << i << " ";
        }
        cout << "Sum=" << soma << '\n';
        cin >> m >> n;
    }
    
    return 0;
}