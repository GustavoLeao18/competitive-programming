#include <bits/stdc++.h>

using namespace std;

int main() {

    int horaI, minutoI, horaF, minutoF, tempoInicial, tempoFinal, tempoTotal, tempoHora, tempoMinuto;
    
    cin >> horaI >> minutoI >> horaF >> minutoF;
    
    tempoInicial = horaI * 60 + minutoI;
    tempoFinal = horaF * 60 + minutoF;
    
    tempoTotal = tempoFinal - tempoInicial;
        
    if (tempoFinal <= tempoInicial) {
        tempoTotal = tempoTotal + 1440;
    }
    
    tempoHora = tempoTotal / 60;
    tempoMinuto = tempoTotal % 60;
    
    cout << "O JOGO DUROU " << tempoHora << " HORA(S) E " << tempoMinuto << " MINUTO(S)" << '\n';
    
    return 0;
}