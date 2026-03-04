#include <bits/stdc++.h>

using namespace std;

int main() {

    double R, volume;
    
    cin >> R;
    
    volume = (double) (4 * 3.14159 * R * R * R) / 3;
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << '\n';

    return 0;
}