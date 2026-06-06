#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, maior = 0;

    cin >> n;

    vector <int> freq(13, 0);

    for (int i=0; i<n; i++) {
        cin >> x;
        freq[x]++;
    }

    for (int i=0; i<freq.size(); i++) {
        if (freq[i] > maior) {
            maior = freq[i];
        }
    }

    for (int i=0; i<freq.size(); i++) {
        if (freq[i] == maior) {
            cout << i << " ";
        }
    }

    cout << '\n';
    
    return 0;
}
