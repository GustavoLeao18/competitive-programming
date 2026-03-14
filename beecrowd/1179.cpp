#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int x, contP, contI;
    
    int vetP[5], vetI[5];
    
    contP = 0;
    contI = 0;
    
    for (int i=0; i<15; i++) {
        cin >> x;
        
        if (x % 2 == 0) {
            vetP[contP] = x;
            contP++;
            
            if (contP == 5) {
                for (int j=0; j<5; j++) {
                    cout << "par[" << j << "] = " << vetP[j] << '\n';
                }
                contP = 0;
            }
        }
        else if (x % 2 != 0) {
            vetI[contI] = x;
            contI++;
            
            if (contI == 5) {
                for (int j=0; j<5; j++) {
                    cout << "impar[" << j << "] = " << vetI[j] << '\n';
                }
                contI = 0;
            }
        }
    }
        
    for (int i=0; i<contI; i++) {
        cout << "impar[" << i << "] = " << vetI[i] << '\n';
    }
    
    for (int i=0; i<contP; i++) {
        cout << "par[" << i << "] = " << vetP[i] << '\n';
    }
    
    return 0;
}