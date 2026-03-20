#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    
    while (n != 0) {
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                int dist_topo = i;
                int dist_esq = j;
                int dist_fundo = n - 1 - i;
                int dist_dir = n - 1 - j;

                int valor = 1 + min({dist_topo, dist_fundo, dist_esq, dist_dir});

                if (j == 0) {
                    printf("%3d", valor);
                }
                else {
                    printf(" %3d", valor);
                }
            }

            cout << '\n';
        }

        cout << '\n';

        cin >> n;
    }
    
    return 0;
}