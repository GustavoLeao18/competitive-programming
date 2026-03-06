#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, contP = 0;
    
    for (int i=0; i<5; i++) {
        cin >> x;
        
        if (x % 2 == 0) {
            contP++;
        }
    }
    
    cout << contP << " valores pares" << '\n';
    
    return 0;
}