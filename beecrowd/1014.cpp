#include <bits/stdc++.h>

using namespace std;

int main() {

    int distancia;
    double combustivel, consumoM;
    
    cin >> distancia >> combustivel;
    
    consumoM = distancia / combustivel;
    
    cout << fixed << setprecision(3);
    cout << consumoM << " km/l" << '\n';

    return 0;
}