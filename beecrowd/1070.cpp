#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, soma;
    
    cin >> x;
    
    if (x % 2 == 0) {
        x++;
    }
    
    for (int i=0; i<6; i++) {
        cout << x << '\n';
        x = x + 2;
    }     
    
    return 0;
}