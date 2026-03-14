#include <bits/stdc++.h>

using namespace std;


int main() {

    int x, y, troca;
    
    cin >> x >> y;
    
    if (x > y) {
        troca = x; 
        x = y;
        y = troca;
    }
    
    for (int i=x+1; i<y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << '\n';
        }
    }
    
    return 0;
}