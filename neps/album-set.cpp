#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x;

    cin >> n >> x;

    set <int> album;

    for (int i=0; i<m; i++) {
        cin >> x;
        album.insert(x);
    }

    cout << n - album.size() << '\n';

    return 0;
}
