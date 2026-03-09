#include <bits/stdc++.h>

using namespace std;


int main() {

    double j;

    j = 1;
    for (double i=0; i<=2; i+=0.2) {
        cout << "I=" << i << " J=" << j << '\n';
        cout << "I=" << i << " J=" << j+1 << '\n';
        cout << "I=" << i << " J=" << j+2 << '\n';
        
        j = j + 0.2;
    }
    
    return 0;
}