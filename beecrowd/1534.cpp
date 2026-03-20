#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, valor;
    
    while (cin >> n) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                
               if (j == n - 1 - i) {
                   valor = 2;
                   cout << valor;
               }
               else if (j == i) {
                   valor = 1;
                   cout << valor;
               } 
               else {
                   valor = 3;
                   cout << valor;
               }
                   
            }
            
            cout << '\n';
        }
    }
    
    return 0;
}