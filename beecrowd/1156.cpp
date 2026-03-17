#include <bits/stdc++.h>

using namespace std;


int main() {

   double s, denominador, cont;
   
   cont = 1;
   s = 1;
   
   for (int i=3; i<=39; i+=2) {
       denominador = pow(2, cont);
       s = s + ((double) i / denominador);
       cont++;
   }
   
   cout << fixed << setprecision(2) << s << '\n';
    
    return 0;
}