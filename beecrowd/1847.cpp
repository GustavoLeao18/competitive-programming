#include <bits/stdc++.h>

using namespace std;


int main() {

    int t1, t2, t3;
    string h, f = ":)", t = ":(";
    
    cin >> t1 >> t2 >> t3;
    
    if (t2 == t1) {
        if (t3 > t2) {
            h = f;
        }
        else {
            h = t;
        }
    }
    else if (t2 > t1) {
        if (t3 == t2 || t3 < t2) {
            h = t;
        }
        else if (t3 > t2 && (t3 - t2) < (t2 - t1)) {
            h = t;
        }
        else {
            h = f;
        }
    }
    else if (t2 < t1) {
        if (t3 > t2 || t3 == t2) {
            h = f;
        }
        else if (t3 < t2 && (t2 - t3) < (t1 - t2)) {
            h = f;
        }
        else {
            h = t;
        }
    }
    
    cout << h << '\n';
    
    return 0;
}