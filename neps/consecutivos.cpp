#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, seq, pontos = 0;

    cin >> n;

    vector<int> v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    for (int i=0; i<n; i++) {
        seq = 1;
        for (int j=i+1; j<n; j++) {
            if (v[j] == v[i]) {
                seq++;
            } 
            else {
                break;
            }
        }
        if (seq > pontos) {
            pontos = seq;
        }
    }

    cout << pontos << '\n';

    return 0;
}
