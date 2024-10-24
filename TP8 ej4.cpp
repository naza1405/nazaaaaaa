// Escribir un programa que lea una cadena de texto y una palabra del usuario, y utilizando funciones indique, si la palabra se encuentra en la cadena
// Usar una funcion para buscar la palabra en la cadena y otra para imprimir el resultado
// Ejemplo de entrada: Cadena: esto es la frase de ejemplo. Palabra: ejemplo

#include<iostream>
#include<string>
using namespace std;

bool buscarPalabra(const string& cadena, const string& palabra){
	int cadenaLonguitud = cadena.length();
	int palabraLonguitud = palabra.length();
	
	for(int i = 0; i <= cadenaLonguitud - palabraLonguitud; i++){
		if (cadena.substr(i, palabraLonguitud) == palabra){
			return true;
		}
	}
	return false;
}

void imprimirResultado(const string& cadena, const string& palabra){
	if(buscarPalabra(cadena, palabra)){
		cout<<"La palabra ' "<<palabra<<" ' se encuentra en la cadena. "<<endl;
	}else{
		cout<<"la palabra ' "<<palabra<<" ' no se encuentra en la cadena"<<endl;
	}
}

int main()
{
string cadena, palabra;
cout<<"Ingrese una cadena de texto: ";
getline(cin, cadena);
cout<<"Ingrese una palabra: ";
cin>>palabra;

imprimirResultado(cadena,palabra);
return 0;
}

