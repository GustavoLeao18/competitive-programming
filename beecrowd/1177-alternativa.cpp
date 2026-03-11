#include <bits/stdc++.h>

using namespace std;


int main() {

    int t, i = 0;
    
    cin >> t;
    
    int vet[1000];
    
    while (i < 1000) {
        for (int j=0; j<t; j++) {
            
            if (i == 1000) {
                break;
            }

            vet[i] = j;
            i++;
        }
    }

    for (int i=0; i<1000; i++) {
        cout << "N[" << i << "] = " << vet[i] << '\n';
    }
    
    return 0;
}