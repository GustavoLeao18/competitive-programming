#include <bits/stdc++.h>

using namespace std;


int main() {

    int golI, golG, gremio, inter, empate, cont, codigo;

    codigo = 0;
    gremio = 0;
    inter = 0;
    empate = 0;
    cont = 0;

    while (codigo != 2) {
        cin >> golI >> golG;
        cont++;

        if (golI > golG) {
            inter++;
        }
        else if (golG > golI) {
            gremio++;
        }
        else {
            empate++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << '\n';
        cin >> codigo;
    }

    cout << cont << " grenais" << '\n';
    cout << "Inter:" << inter << '\n';
    cout << "Gremio:" << gremio << '\n';
    cout << "Empates:" << empate << '\n';

    if (gremio > inter) {
        cout << "Gremio venceu mais" << '\n';
    }
    else if (inter > gremio) {
        cout << "Inter venceu mais" << '\n';
    }
    else {
        cout << "Nao houve vencedor" << '\n';
    }
    
    return 0;
}