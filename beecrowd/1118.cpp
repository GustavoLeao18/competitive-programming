#include <bits/stdc++.h>

using namespace std;


int main() {

    double n1, n2, media, codigo;
    
    codigo = 0;
    
    while (codigo != 2) {
        cin >> n1;
        
        while (n1 < 0 || n1 > 10) {
            cout << "nota invalida" << '\n';
            cin >> n1;
        }
        
        cin >> n2;
        
        while (n2 < 0 || n2 > 10) {
            cout << "nota invalida" << '\n';
            cin >> n2;
        }
        
        media = (n1 + n2) / 2;
        
        cout << fixed << setprecision(2) << "media = " << media << '\n';
        
        cout << "novo calculo (1-sim 2-nao)" << '\n';
        cin >> codigo;
        
        while (codigo != 1 && codigo != 2) {
        cout << "novo calculo (1-sim 2-nao)" << '\n';
        cin >> codigo;
        }
    }
    
    return 0;
}