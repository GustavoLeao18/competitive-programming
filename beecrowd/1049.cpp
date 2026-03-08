#include <bits/stdc++.h>

using namespace std;


int main() {

    string primeira, segunda, terceira;
    
    cin >> primeira >> segunda >> terceira;
    
    if (primeira == "vertebrado") {
        if (segunda == "ave") {
            if (terceira == "carnivoro") {
                cout << "aguia" << '\n';
            }
            else if (terceira == "onivoro") {
                cout << "pomba" << '\n';
            }
        }
        else if (segunda == "mamifero") {
            if (terceira == "onivoro") {
                cout << "homem" << '\n';
            }
            else if (terceira == "herbivoro") {
                cout << "vaca" << '\n';
            }
        }
    }
    else if (primeira == "invertebrado") {
        if (segunda == "inseto") {
            if (terceira == "hematofago") {
                cout << "pulga" << '\n';
            }
            else if (terceira == "herbivoro") {
                cout << "lagarta" << '\n';
            }
        }
        else if (segunda == "anelideo") {
            if (terceira == "hematofago") {
                cout << "sanguessuga" << '\n';
            }
            else if (terceira == "onivoro") {
                cout << "minhoca" << '\n';
            }
        }
    }
    
    return 0;
}