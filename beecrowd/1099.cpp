#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, x, y, troca, soma;
    
    cin >> n;
    
    for (int i=0; i<n; i++) {
        soma = 0;
        
        cin >> x >> y;
        
        if (x > y) {
            troca = x;
            x = y;
            y = troca;
        }
        
        for (int j=x+1; j<y; j++) {
            if (j % 2 != 0) {
                soma = soma + j;
            }
        }
        
        cout << soma << '\n';
    }
    
    return 0;
}