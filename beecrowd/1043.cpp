#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c, perimetro, area;
    
    cin >> a >> b >> c;
    
    cout << fixed << setprecision(1);
    if (a < b + c && b < a + c && c < a + b) {
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << '\n';
    }
    else {
        area = (a + b) * c / 2;
        cout << "Area = " << area << '\n';
    }

    return 0;
}