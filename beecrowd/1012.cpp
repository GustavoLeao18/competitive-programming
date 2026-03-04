#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c, areaT, areaC, areaTp, areaQ, areaR;
    
    cin >> a >> b >> c;
    
    areaT = (a * c) / 2;
    
    areaC = 3.14159 * c * c;
    
    areaTp = (a + b) * c / 2;
    
    areaQ = b * b;
    
    areaR = a * b;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaT << '\n';
    cout << "CIRCULO: " << areaC << '\n';
    cout << "TRAPEZIO: " << areaTp << '\n';
    cout << "QUADRADO: " << areaQ << '\n';
    cout << "RETANGULO: " << areaR << '\n';

    return 0;
}