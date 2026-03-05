#include <bits/stdc++.h>

using namespace std;

int main() {

    int tempoGasto, velMedia, distPer;
    double litros;
    
    cin >> tempoGasto >> velMedia;
    
    distPer = tempoGasto * velMedia;
    
    litros = (double) distPer / 12;
    
    cout << fixed << setprecision(3) << litros << '\n';

    return 0;
}