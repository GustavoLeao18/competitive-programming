#include <bits/stdc++.h>

using namespace std;


int main() {

   int n;
   long int x, soma;
   
   cin >> n;
   
   for (int i=0; i<n; i++) {
       cin >> x;
       soma = 0;
       
       for (int j=1; j<x; j++) {
           if (x % j == 0) {
               soma = soma + j;
           }
       }
       
       if (soma == x) {
           cout << x << " eh perfeito" << '\n';
       }
       else {
           cout << x << " nao eh perfeito" << '\n';
       }
   }
    
    return 0;
}