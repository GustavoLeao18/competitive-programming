#include <bits/stdc++.h>

using namespace std;


int main() {

    int vet[20], vet2[20], fim;
    
    for (int i=0; i<20; i++) {
        cin >> vet[i];
    }
    
    fim = 19;
    for (int i=0; i<20; i++) {
        vet2[i] = vet[fim];
        fim = fim - 1;
    }
    
    for (int i=0; i<20; i++) {
        cout << "N[" << i << "] = " << vet2[i] << '\n';
    }
    return 0;
}