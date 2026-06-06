#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ana, posA, beatriz, posB, carolina;

    cin >> ana, beatriz;

    posA = ana % 3;

    posB = beatriz % 3;

    if (posA == posB) {
        if (posA == 0) {
            posB = 1;
        } else if (posA == 1) {
            posB = 2;
        } else {
            posB = 0;
        }
    }

    if (posB == 1) {
        carolina = 2;
    } else if (posB == 2) {
        carolina = 0;
    } else if (posB == 0) {
        carolina = 1;
    }

    cout << carolina << '\n';
    
    return 0;
}
