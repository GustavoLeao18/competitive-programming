#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, soma = 0; 
    vector <int> v;
    
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> x;
        if (x == 0) {
            v.pop_back();
        } else {
            v.push_back(x);
        }
    }

    for (int i=0; i<v.size(); i++) {
        soma += v[i];
    }

    cout << soma << '\n';

    return 0;
}
