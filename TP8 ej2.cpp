#include <iostream>
#include <string>
using namespace std;

int contarPalabras(string texto);
int main() 
{
	string texto;

    cout << "ingrese las palabras" << endl;
    getline(cin,texto);
    
    contarPalabras(texto);
}

int contarPalabras(string texto)
{
	int longitud = texto.length();
	int contarPalabras = 1;
	
	for(int i = 0; i < longitud;i++)
	{
		texto.at(i);
		if(texto.at(i) == ' ')
		{
			contarPalabras +=1;
		}
	}
	cout<<"El total de palabras es:"<<contarPalabras<<endl;
}
