#include <bits/stdc++.h>

using namespace std;


int main() {

    int vet[100];
    int maior, posMaior;
    
    for (int i=0; i<100; i++) {
        cin >> vet[i];
    }
    
    maior = vet[0];
    
    for (int i=0; i<100; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posMaior = i+1;
        }
    }
    
    cout << maior << '\n' << posMaior << '\n';
    
    return 0;
}