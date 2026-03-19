#include <bits/stdc++.h>

using namespace std;


int main() {

    char operacao;
    cin >> operacao;
    
    double mat[12][12];
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> mat[i][j];
        }
    }
    
    double soma, media;
    int cont;
    
    soma = 0;
    cont = 0;
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            if (j < 11 - i) {
                soma += mat[i][j];
                cont++;
            }
        }
    }
    
    cout << fixed << setprecision(1);
    
    if (operacao == 'S') {
        cout << soma << '\n';
    }
    else {
        media = soma / cont;
        cout << media << '\n';
    }
    
    
    return 0;
}