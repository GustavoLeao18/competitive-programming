#include <bits/stdc++.h>

using namespace std;


int main() {

    int vet[20];
    
    for (int i=0; i<20; i++) {
        cin >> vet[i];
    }
    
    for (int i=0; i<10; i++) {
        swap(vet[i], vet[19 - i]);
    }
    
    for (int i=0; i<20; i++) {
        cout << "N[" << i << "] = " << vet[i] << '\n';
    }
    return 0;
}