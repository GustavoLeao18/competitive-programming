#include <bits/stdc++.h>

using namespace std;


int main() {

    int t, anos;
    long int pa, pb;
    double g1, g2;
    
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> pa >> pb >> g1 >> g2;
        anos = 0;
        while (pa <= pb && anos <= 100) {
            pa = pa + (g1 / 100 * pa);
            pb = pb + (g2 / 100 * pb);
            anos++;
        }
        
        if (anos > 100) {
            cout << "Mais de 1 seculo." << '\n';
        }
        else {
            cout << anos << " anos." << '\n';
        }
    }
    
    return 0;
}