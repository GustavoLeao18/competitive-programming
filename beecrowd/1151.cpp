#include <bits/stdc++.h>

using namespace std;


int main() {

   int x, y, proximo, n;
   
   cin >> n;
   
   x = 0;
   y = 1;
   
   if (n == 1) {
       cout << x;
   }
   else if (n == 2) {
       cout << x << " " << y;
   }
   else {
       cout << x << " " << y << " ";
       for (int i=3; i<=n; i++) {
           proximo = x + y;
           cout << proximo;
           
           if (i != n) {
               cout << " ";
           }
           else if (i == n) {
               cout << '\n';
           }
           
           x = y;
           y = proximo;
       }
   }
   
    
    return 0;
}