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
    
    int cont;
    double soma, media;
    
    cont = 0;
    soma = 0;
    
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            if (j < 11 - i && j > i) {
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