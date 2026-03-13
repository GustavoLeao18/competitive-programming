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
            
            if (contP > 4) {
                for (int j=0; j<5; j++) {
                    cout << "par[" << i << "] = " << vetP[i] << "\n";
                }
                contP = 0;
            }
        }
        else {
            vetI[contI] = x;
            contI++;
            
            if (contI > 4) {
                for (int j=0; j<5; j++) {
                    cout << "par[" << i << "] = " << vetP[i] << "\n";
                }
                contP = 0;
            }
        }
    }
    
    return 0;
}