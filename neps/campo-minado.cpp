#include <iostream>

using namespace std;

int main(){
    int tam;

    cin >> tam;

    int v[tam];

    for (int i=0;i<tam;i++) {
        cin >> v[i];
    }

    for (int i=0;i<tam;i++) {
        if (i==0) {
            cout << v[i] + v[i+1] << '\n';
        } else if (i == tam-1) {
           cout << v[i] + v[i-1] << '\n';
        } else {
            cout << v[i-1] + v[i] + v[i+1] << '\n';
        }
    }
    
    return 0;
}
