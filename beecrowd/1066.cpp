#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, contPar, contImpar, contP, contN;
    
    contPar = 0;
    contImpar = 0;
    contP = 0;
    contN = 0;
    
    for (int i=0; i<5; i++) {
        cin >> x;
        
        if (x > 0) {
            contP++;
        }
        else if (x < 0) {
            contN++;
        }
        
        if (x % 2 == 0) {
            contPar++;
        }
        else {
            contImpar++;
        }
    }
    
    cout << contPar << " valor(es) par(es)" << '\n';
    cout << contImpar << " valor(es) impar(es)" << '\n';
    cout << contP << " valor(es) positivo(s)" << '\n';
    cout << contN << " valor(es) negativo(s)" << '\n';
    
    return 0;
}