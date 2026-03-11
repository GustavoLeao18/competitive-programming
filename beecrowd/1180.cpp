#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, menor, posMenor;
    
    cin >> n;
    
    int x[n];
    
    cin >> x[0];
    
    menor = x[0];
    posMenor = 0;
    for (int i=1; i<n; i++) {
        cin >> x[i];
        
        if (x[i] < menor) {
            menor = x[i];
            posMenor = i;
        }
    }
    
    cout << "Menor valor: " << menor << '\n';
    cout << "Posicao: " << posMenor << '\n';
    
    return 0;
}