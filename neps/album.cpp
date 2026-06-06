#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cont = 0;

    cin >> n >> m;
    vector <int> v(m);

    for (int i=0;i<m;i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i=0; i<m; i++) {
        if (i == 0 || v[i] != v[i-1]) {
          cont++;
        }
    }

    cout << n - cont << '\n';

    return 0;
}
