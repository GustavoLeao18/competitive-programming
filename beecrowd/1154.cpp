#include <bits/stdc++.h>

using namespace std;


int main() {

   int idade, cont, soma;
   double media;
   
   cin >> idade;
   
   cont = 0;
   soma = 0;
   
   while (idade > 0) {
       cont++;
       soma = soma + idade;
       cin >> idade;
   }
   
   media = (double) soma / cont;
   
   cout << fixed << setprecision(2) << media << '\n';
    
    return 0;
}