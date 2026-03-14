#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    double x, y, divisao;
    
    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        
        if (y != 0) {
            divisao = x / y;
            cout << fixed << setprecision(1) << divisao << '\n'; 
        }
        else {
            cout << "divisao impossivel" << '\n';
        }
    }
    
    return 0;
}