#include <bits/stdc++.h>

using namespace std;


int main() {

    int linha;
    char operacao;
    double mat[12][12];
    double soma = 0, media;
    
    cin >> linha;
    
    cin >> operacao;
    
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> mat[i][j];
        }
    }
    
    for (int i=0; i<12; i++) {
        soma = soma + mat[linha][i];
    }
    
    cout << fixed << setprecision(1);
    
    if (operacao == 'S') {
        cout << soma << '\n';
    }
    else if (operacao == 'M') {
        media = soma / 12;
        
        cout << media << '\n';
    }
    
    return 0;
}