#include <bits/stdc++.h>

using namespace std;

int main() {

    int j;
    
    for (int i=1; i<10; i+=2) {
        j = 7;
        cout << "I=" << i << " J=" << j << '\n';
        cout << "I=" << i << " J=" << j-1 << '\n';
        cout << "I=" << i << " J=" << j-2 << '\n';
    }
    
    return 0;
}