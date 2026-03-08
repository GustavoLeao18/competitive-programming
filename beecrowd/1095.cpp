#include <bits/stdc++.h>

using namespace std;


int main() {

    int j = 65;
    
    for (int i=1; i<=37; i+=3) {
        j = j-5;
        
        cout << "I=" << i << " J=" << j << '\n';
    }
    
    return 0;
}