#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, horas, minutos, segundos;
    
    cin >> x;
    
    horas = x / 3600;
    
    minutos = (x % 3600) / 60;
    
    segundos = (x % 3600) % 60;
    
    cout << horas << ":" << minutos << ":" << segundos << '\n';

    return 0;
}