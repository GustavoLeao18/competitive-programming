#include <bits/stdc++.h>

using namespace std;


int main() {

   int n, x, y, soma;
   
   cin >> n;
   
   
   for (int i=0; i<n; i++) {
        cin >> x >> y;
        soma = 0;
       
       for (int j=0; j<y; j++) {
           if (x % 2 == 0) {
               x = x + 1;
           }
           
           soma = soma + x;
           x+=2;
       }
       
       cout << soma << '\n';
   }
    
    return 0;
}