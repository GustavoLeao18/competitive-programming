#include <bits/stdc++.h>

using namespace std;

int main() {

    int contP = 0;
    double x;

    for (int i=0; i<6; i++) {
        cin >> x;

        if (x > 0) {
            contP++;
        }
    }

    cout << contP << " valores positivos" << '\n';

    return 0;
}