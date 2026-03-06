#include <bits/stdc++.h>

using namespace std;

int main() {

    double x, somaP = 0, mediaP;
    int contP = 0;
    
    for (int i=0; i<6; i++) {
        cin >> x;
        
        if (x > 0) {
            contP++;
            somaP = somaP + x;
        }
    }
    
    mediaP = somaP / contP;
    
    cout << fixed << setprecision(1);
    cout << contP << " valores positivos" << '\n';
    cout << mediaP << '\n';
    
    return 0;
}