#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, cont100, cont50, cont20, cont10, cont5, cont2, cont1;

    cin >> n;

    cout << n << '\n';

    cont100 = n / 100;
    n = n % 100;

    cont50 = n / 50;
    n = n % 50;

    cont20 = n / 20;
    n = n % 20;

    cont10 = n / 10;
    n = n % 10;

    cont5 = n / 5;
    n = n % 5;

    cont2 = n / 2;
    n = n % 2;

    cont1 = n / 1;

    cout << cont100 << " nota(s) de R$ 100,00" << '\n';

    cout << cont50 << " nota(s) de R$ 50,00" << '\n';

    cout << cont20 << " nota(s) de R$ 20,00" << '\n';

    cout << cont10 << " nota(s) de R$ 10,00" << '\n';

    cout << cont5 << " nota(s) de R$ 5,00" << '\n';

    cout << cont2 << " nota(s) de R$ 2,00" << '\n';
    
    cout << cont1 << " nota(s) de R$ 1,00" << '\n';

    return 0;
}