#include <bits/stdc++.h>

using namespace std;

int main() {

    int tempoInicial, tempoFinal, tempoTotal, diaI, diaF, contDias, horaI, horaF, contHoras, minutoI, minutoF, contMinutos, segundoI, segundoF, contSegundos;
    string lixo;
    
    cin >> lixo >> diaI;
    cin >> horaI >> lixo >> minutoI >> lixo >> segundoI;
    
    cin >> lixo >> diaF;
    cin >> horaF >> lixo >> minutoF >> lixo >> segundoF;

    tempoInicial = diaI * 86400 + horaI * 3600 + minutoI * 60 + segundoI;
    tempoFinal = diaF * 86400 + horaF * 3600 + minutoF * 60 + segundoF;

    tempoTotal = tempoFinal - tempoInicial;

    contDias = tempoTotal / 86400;
    contHoras = (tempoTotal % 86400)  / 3600;
    contMinutos = ((tempoTotal % 86400) % 3600) / 60;
    contSegundos = ((tempoTotal % 86400) % 3600) % 60;

    cout << contDias << " dia(s)" << '\n';
    cout << contHoras << " hora(s)" << '\n';
    cout << contMinutos << " minuto(s)" << '\n';
    cout << contSegundos << " segundo(s)" << '\n';
    
    return 0;
}