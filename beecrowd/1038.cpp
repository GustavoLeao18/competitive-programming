#include <bits/stdc++.h>

using namespace std;

int main() {

    int codigo, quant;
    double total;
    
    cin >> codigo >> quant;
    
    if (codigo == 1) {
        total = quant * 4;
    }
    else if (codigo == 2) {
        total = quant * 4.5;
    }
    else if (codigo == 3) {
        total = quant * 5;
    }
    else if (codigo ==4) {
        total = quant * 2;
    }
    else {
        total = quant * 1.5;
    }
    
    cout << "Total: R$ " << fixed << setprecision(2) << total << '\n';

    return 0;
}