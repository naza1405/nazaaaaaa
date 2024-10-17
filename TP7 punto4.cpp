#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    char caracter;
    cout << "Ingrese la palabra: ";
    cin>>palabra;
    cout << "Ahora ingrese el caracter a contar: ";
    cin >> caracter;

    int pow = 0;
    for (int i = 0; i < palabra.length(); ++i) {
        if (palabra[i] == caracter) {
            pow++;
        }
    }

    cout << "La cantidad de veces que aparece "<< caracter << " es " << pow << endl;

    return 0;
}

