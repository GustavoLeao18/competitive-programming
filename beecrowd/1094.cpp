#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, quant, sapo = 0, rato = 0, coelho = 0, total;
    double Psapo, Prato, Pcoelho;
    char tipo;
    
    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> quant >> tipo;
        
        switch (tipo) {
            case 'S':
                sapo = sapo + quant;
                break;
            case 'R':
                rato = rato + quant;
                break;
            case 'C':
                coelho = coelho + quant;
                break;
        }
    }
    
    total = sapo + rato + coelho;
    
    Psapo = (double) sapo * 100 / total;
    Prato = (double) rato * 100 / total;
    Pcoelho = (double) coelho * 100 / total;
    
    cout << fixed << setprecision(2);
    
    cout << "Total: " << total << " cobaias" << '\n';
    cout << "Total de coelhos: " << coelho <<  '\n';
    cout << "Total de ratos: " << rato << '\n';
    cout << "Total de sapos: " << sapo << '\n';
    cout << "Percentual de coelhos: " << Pcoelho << " %" << '\n';
    cout << "Percentual de ratos: " << Prato << " %" << '\n';
    cout << "Percentual de sapos: " << Psapo << " %" << '\n';
    
    return 0;
}