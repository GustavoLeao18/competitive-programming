#include <bits/stdc++.h>

using namespace std;


int main() {

    int  cont = 0;
    char operacao;
    double mat[12][12], soma = 0, media;
    
    cin >> operacao;
    
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> mat[i][j];
        }
    }
    
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            if (j > i) {
                soma = soma + mat[i][j];
                cont++;
            }
        }
    }
    
    cout << fixed << setprecision(1);
    
    if (operacao == 'S') {
        cout << soma << '\n';
    }
    else if (operacao == 'M') {
        media = (double) soma / cont;
        cout << media << '\n';
    }
    
    return 0;
}