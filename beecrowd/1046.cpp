#include <bits/stdc++.h>

using namespace std;

int main() {

    int horaI, horaF, tempoTotal;
    
    cin >> horaI >> horaF;
    
    tempoTotal = horaF - horaI;
    
    if (horaI >= horaF) {
        tempoTotal = tempoTotal + 24;
    }
    
    cout << "O JOGO DUROU " << tempoTotal << " HORA(S)" << '\n';
    
    return 0;
}