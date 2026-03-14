#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, x;
    
    cin >> n;
    
    x = 1;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            cout << x << " ";
            x++;
        }
        cout << "PUM" << '\n';
        x = x + 1;
    }
    
    return 0;
}