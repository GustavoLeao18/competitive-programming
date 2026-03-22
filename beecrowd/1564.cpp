#include <bits/stdc++.h>

using namespace std;


int main() {

    int reclamacoes;
    
    while (cin >> reclamacoes) {
        
        if (reclamacoes == 0) {
            cout << "vai ter copa!" << '\n';
        }
        else if (reclamacoes > 0) {
            cout << "vai ter duas!" << '\n';
        }
    }
    
    return 0;
}