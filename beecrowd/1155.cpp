#include <bits/stdc++.h>

using namespace std;


int main() {

   double s;
   
   s = 1;
   
   for (int i=2; i<=100; i++) {
       s = s + ((double) 1 / i);
   }
   
   cout << fixed << setprecision(2) << s << '\n';
    
    return 0;
}