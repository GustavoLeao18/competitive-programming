#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, quadrado;
    
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        if (i % 2 == 0) {
            quadrado = i * i;
            cout << i << "^2 = " << quadrado << '\n'; 
        }
    }
    
    return 0;
}