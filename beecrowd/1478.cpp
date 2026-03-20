#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    
    while (n != 0) {

        for (int i=0; i<n; i++) {
            int valor = 1, valorA = i+1, valorD = 1;

            for (int j=0; j<n; j++) {
                
                if (j > i) {
                    valorD++;
                    if (j == 0) {
                        printf("%3d", valorD);
                    }
                    else {
                        printf(" %3d", valorD);
                    }
                }
                else if (j < i) {
                    if (j == 0) {
                        printf("%3d", valorA);
                    }
                    else {
                        printf(" %3d", valorA);
                    }
                    valorA--;
                }
                else {
                    if (j == 0) {
                        printf("%3d", valor);
                    }
                    else {
                        printf(" %3d", valor);
                    }
                }
                

            }

            cout << '\n';

        }

        cout << '\n';

        cin >> n;

    }
    
    return 0;
}