#include <iostream>
#include <string>
using namespace std;

int main() {

   string palabra;
   
   cout << "Introduce una palabra ";
   getline(cin, palabra);
	    
   int longitud = palabra.length();

 
   string reves(longitud, '0');
	  
    for (int i = 0; i < longitud; ++i) {
        reves [i] = palabra[longitud - 1 - i];
    }

 
   cout << "Cadena invertida: " << reves << endl;

    return 0;
}

