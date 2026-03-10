#include <bits/stdc++.h>

using namespace std;


int main() {

    long long n, a, x, y;
    
    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> a;
        
        long long proximo[a+1];
        
        x = 0;
        y = 1;
        proximo[0] = x;
        proximo[1] = y;

        if (a >= 2) {
            for (int j=2; j<=a; j++) {
                proximo[j] = x + y;
                x = y;
                y = proximo[j];
            }
        }
        cout << "Fib(" << a << ") = " << proximo[a] << '\n';
    }
    
    
    return 0;
}