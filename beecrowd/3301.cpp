#include <bits/stdc++.h>

using namespace std;

int main() {

    int h, z, l;
    
    cin >> h >> z >> l;
    
    vector<int> v = {h, z, l};
    
    sort(v.begin(), v.end());
    
    if (v[1] == h) {
        cout << "huguinho" << '\n';
    }
    else if (v[1] == z) {
        cout << "zezinho" << '\n';
    }
    else {
        cout << "luisinho" << '\n';
    }
    
    return 0;
}