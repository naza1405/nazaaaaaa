#include <iostream>
#include <string>

using namespace std;


int main() {
	string palabra1,palabra2;
    string palabra = palabra1 + palabra2;
    cout<<"introduzca la palabra: ";
    cin>>palabra1;
    cout<<"introduzca la otra palabra: ";
    cin>>palabra2;
    
    cout << "La cadena concatenada es: " << palabra1+palabra2 << endl;
    return 0;
}

