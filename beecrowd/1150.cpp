#include <bits/stdc++.h>

using namespace std;


int main() {

   int x, z, y, soma, cont = 0;
   
   cin >> x >> z;
   
   while (z <= x) {
       cin >> z;
   }
   
   soma = x;
   while (soma <= z) {
       y = x + 1;
       soma = soma + y;
       cont++;
   }
   
   cout << cont << '\n';
    
    return 0;
}