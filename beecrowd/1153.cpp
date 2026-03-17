#include <bits/stdc++.h>

using namespace std;


int main() {

   int n, produto;
   
   cin >> n;
   
   produto = 1;
   
   for (int i=n; i>0; i--) {
       produto = produto * i;
   }
   
   cout << produto << '\n';
    
    return 0;
}