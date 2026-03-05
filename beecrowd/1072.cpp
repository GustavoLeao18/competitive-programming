#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c;
    
    cin >> a >> b >> c;
    
    vector<double> v = {a, b, c};
    
    sort(v.begin(), v.end() ,greater<double>());
    
    a = v[0];
    b = v[1];
    c = v[2];
    
    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << '\n';
    }
    else if (a == sqrt((b * b) + (c * c))) {
        cout << "TRIANGULO RETANGULO" << '\n';
    }
    else if (a > sqrt((b * b) + (c * c))) {
        cout << "TRIANGULO OBTUSANGULO" << '\n';
    }
    else if (a < sqrt((b * b) + (c * c))) {
        cout << "TRIANGULO ACUTANGULO" << '\n';
    }
     
    if (a == b && a == c) {
        cout << "TRIANGULO EQUILATERO" << '\n';
    }
    else if (b == c && b != a) {
        cout << "TRIANGULO ISOSCELES" << '\n';
    }
    else if (a == c && a != b) {
        cout << "TRIANGULO ISOSCELES" << '\n';
    }
    else if (a == b && a != c) {
        cout << "TRIANGULO ISOSCELES" << '\n';
    }

    return 0;
}