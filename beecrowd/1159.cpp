#include <bits/stdc++.h>

using namespace std;


int main() {

   int x, soma;
   
   cin >> x;
   
   while (x != 0) {
       if (x % 2 != 0) {
           x++;
       }
       
       soma = (5 * x) + 20;
       
       cout << soma << '\n';
       
       cin >> x;
   }
    
    return 0;
}