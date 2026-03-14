#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, x;
    
    cin >> n;
    
    x = 1;;
    
    for (int i=0; i<n; i++) {
        cout << x << " " << x * x << " " << x * x * x << '\n';
        cout << x << " " << (x * x) + 1 << " " << (x * x * x) + 1 << '\n';
        x++;
    }
    
    return 0;
}