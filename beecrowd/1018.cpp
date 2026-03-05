#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, cont100, cont50, cont20, cont10, cont5, cont2, cont1;

    cin >> n;

    cont100 = n / 100;

    cont50 = (n % 100) / 50;

    cont20 = ((n % 100) % 50) / 20;

    cont10 = (((n % 100) % 50) % 20) / 10;

    cont5 = ((((n % 100) % 50) % 20) % 10) / 5;

    cont2 = (((((n % 100) % 50) % 20) % 10) % 5) / 2;

    cont1 = ((((((n % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    cout << n << '\n';
    cout << cont100 << " nota(s) de R$ 100,00" << '\n';
    cout << cont50 << " nota(s) de R$ 50,00" << '\n';
    cout << cont20 << " nota(s) de R$ 20,00" << '\n';
    cout << cont10 << " nota(s) de R$ 10,00" << '\n';
    cout << cont5 << " nota(s) de R$ 5,00" << '\n';
    cout << cont2 << " nota(s) de R$ 2,00" << '\n';
    cout << cont1 << " nota(s) de R$ 1,00" << '\n';

    return 0;
}