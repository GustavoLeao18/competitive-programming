#include <bits/stdc++.h>

using namespace std;


int main() {

    int coluna;
    char operacao;
    double mat[12][12], soma = 0, media;
    
    cin >> coluna;
    cin >> operacao;
    
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> mat[i][j];
        }
    }
    
    for (int i=0; i<12; i++) {
        soma = soma + mat[i][coluna];
    }
    
    cout << fixed << setprecision(1);
    
    if (operacao == 'S') {
        cout << soma << '\n';
    }
    if (operacao == 'M') {
        media = soma / 12;
        
        cout << media << '\n';
    }
    
    return 0;
}