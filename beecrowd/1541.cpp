#include <bits/stdc++.h>

using namespace std;


int main() {

    int a, b, c, areaT, novaA, lado;

    cin >> a;
    
    while (a != 0) {
        cin >> b >> c;
        
        areaT= a * b;
        novaA = 100 * areaT / c;
        lado = sqrt(novaA);
        
        cout << lado << '\n';
        
        cin >> a;
    }
    
    return 0;
}