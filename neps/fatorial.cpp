#include <iostream>

using namespace std;

int main(){
    int n, resultado = 1;

    cin >> n;

    for (int i=n; i>0; i--) {
        resultado *= i;
    }

    cout << resultado << '\n';

    return 0;
}
