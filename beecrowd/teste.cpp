#include <bits/stdc++.h>

using namespace std;

int main() {

    string estado;
    
    cout << "Como voce esta mozinho?" << '\n';
    cin >> estado;
    
    if (estado == "feliz") {
        cout << "Entao estou feliz tmb!" << '\n';
    }
    else if (estado == "triste") {
        cout << "Entao to indo comprar bis" << '\n';
    }
    
    cout << '\n' << "E agora, como voce esta mozinho?" << '\n';
    
    cin >> estado;
    
    if (estado == "feliz") {
        cout << "Entao estou feliz tmb!" << '\n';
    }
    else if (estado == "triste") {
        cout << "Entao to indo comprar bis" << '\n';
    }

    return 0;
}