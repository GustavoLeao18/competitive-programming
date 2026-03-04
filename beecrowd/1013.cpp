#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, maior;
    
    cin >> a >> b >> c;
    
    if (a > b && a > c) {
        maior = a;
    }
    else if (b > c) {
        maior = b;
    }
    else {
        maior = c;
    }
    
    cout << maior << " eh o maior" << '\n';

    return 0;
}