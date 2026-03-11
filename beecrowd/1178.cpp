#include <bits/stdc++.h>

using namespace std;


int main() {

    double x, vet[100];
    
    cin >> x; 
    
    vet[0] = x;
    
    cout << fixed << setprecision(4);
    
    cout << "N[" << 0 << "] = " << vet[0] << '\n';
    
    for (int i=1; i<100; i++) {
        x = x / 2;
        vet[i] = x;
        cout << "N[" << i << "] = " << vet[i] << '\n';
    }
    
    
    return 0;
}