#include <bits/stdc++.h>

using namespace std;


int main() {

    int x, y, troca, soma;
    
    soma = 0;
    
    cin >> x >> y;
    
    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }
    
    for (int i=x; i<=y; i++) {
        if (i % 13 != 0) {
            soma = soma + i;
        }
    }
    
    cout << soma << '\n';
    
    return 0;
}