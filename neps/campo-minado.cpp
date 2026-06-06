#include <iostream>

using namespace std;

int v[50];

int main(){
    int tam;

    cin >> tam;

    for (int i=0;i<tam;i++) {
        cin >> v[i];
    }

    for (int i=0;i<tam;i++) {
        cout << v[i-1] + v[i] + v[i+1] << '\n';
    }
    
    return 0;
}
