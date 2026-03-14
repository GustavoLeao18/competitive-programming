#include <bits/stdc++.h>

using namespace std;


int main() {

    int alcool = 0, gasolina = 0, diesel = 0, codigo;
    
    cin >> codigo;
    
    while (codigo != 4) {
        
        switch (codigo) {
            case 1: 
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
        
        cin >> codigo;

    }
    
    cout << "MUITO OBRIGADO" << '\n';
    cout << "Alcool: " << alcool << '\n';
    cout << "Gasolina: " << gasolina << '\n';
    cout << "Diesel: " << diesel << '\n';
    
    return 0;
}