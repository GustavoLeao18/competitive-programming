#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, tabuada;
    
    cin >> n;
    
    for (int i=1; i<=10; i++) {
        tabuada = i * n;
        cout << i << " x " << n << " = " << tabuada << '\n';
    }
    
    return 0;
}