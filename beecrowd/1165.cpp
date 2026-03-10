#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    
    cin >> n;
    
    int vet[n], cont[n];
    
    for (int i=0; i<n; i++) {
        
        cin >> vet[i];
        cont[i] = 0;
        
        for (int j=1; j<=vet[i]; j++) {
            if (vet[i] % j == 0) {
                cont[i]++;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        if (cont[i] == 2) {
            cout << vet[i] << " eh primo" << '\n';
        }
        else {
            cout << vet[i] << " nao eh primo" << '\n';
        }
    }
    
    return 0;
}