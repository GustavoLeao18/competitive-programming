#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;
    
    cin >> t;
    
    int vet[1000];
    
    for (int i=0; i<1000; i++) {
        vet[i] = i % t;

        cout << "N[" << i << "] = " << vet[i] << '\n';
        }
    
    return 0;
}