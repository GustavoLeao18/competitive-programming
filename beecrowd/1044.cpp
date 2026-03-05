#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, troca;
    
    cin >> a >> b;
    
    if (a > b) {
        troca = a;
        a = b;
        b = troca;
    }
    
    if (b % a == 0) {
        cout << "Sao Multiplos" << '\n';
    }
    else {
        cout << "Nao sao Multiplos" << '\n';
    }

    return 0;
}