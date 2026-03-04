#include <bits/stdc++.h>

using namespace std;

int main() {

    double raio, area;
    
    cin >> raio;
    
    area = 3.14159 * (raio * raio);
    
    cout << fixed << setprecision(4) << "A=" << area << '\n';

    return 0;
}