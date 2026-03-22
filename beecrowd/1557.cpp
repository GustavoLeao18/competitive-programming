#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, t, cont;
    cin >> n;
    
    while (n != 0) {
        
        int mat[n][n];
        t = 0;
        
        for (int i=0; i<n; i++) {
            
            for (int j=0; j<n; j++) {
                mat[i][j] = pow(2, i + j);
                
                if (mat[i][j] > t) {
                    t = mat[i][j];
                }
            }
        }

        cont = 0;
        while (t != 0) {
            t /= 10;
            cont++;
        }
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                
                if (j == 0) {
                    cout << setw(cont) << mat[i][j];
                }
                else {
                    cout << " " << setw(cont) << mat[i][j];
                }
            }
            
            cout << '\n';
        }
        
        cout << '\n';
        
        cin >> n;
        
    }
    
    return 0;
}