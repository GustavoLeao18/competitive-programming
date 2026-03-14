#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, x;
    
    cin >> n;
    
    x = 1;
    
    for (int i=0; i<n; i++) {
        cout << x << " " << pow(x,2) << " " << pow(x,3) << '\n';
        x++;
    }
    
    return 0;
}