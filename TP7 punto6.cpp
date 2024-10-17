#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
int main()
{
	//variables//
	int opcion;
	
	//inicio / tiutlo//
	cout<<"Aqui estan todos los	trabajos hechos con las cadenas especificacadas:"<<endl;
	cout<<""<<endl;
	cout<<"Elija un ejercicio porfavor: "<<endl;
	cout<<""<<endl;
	
	//opciones//
	cout<<"<1> Tomar una cadena y devolver su longitud."<<endl;
	cout<<""<<endl;
	cout<<"<2> Tomar dos cadenas y devolver la concatenacion de ambas."<<endl;
	cout<<""<<endl;
	cout<<"<3> Tomar una cadena y devolver su reverso."<<endl;
	cout<<""<<endl;
	cout<<"<4> Tomar una cadena y devolver la cantidad de veces que aparece un caracter especifico en ella."<<endl;
	cout<<""<<endl;
	cin>>opcion;
	system("cls");
	
	//opciones con contenido//
	switch(opcion)
	{
		case 1:
			{
	string palabra;
	
	cout<<"digame una palabra y le dire cuanto mide:"<<endl;
	cin>>palabra;
	
	cout<<"la longitud que tiene es un total de "<<palabra.length()<<" letras"<<endl;
	return 0;
	}
	break;
	
	case 2:
		{
				
	string palabra1,palabra2;
    string palabra = palabra1 + palabra2;
    cout<<"introduzca la palabra: ";
    cin>>palabra1;
    cout<<"introduzca la otra palabra: ";
    cin>>palabra2;
    
    cout << "La cadena concatenada es: " << palabra1+palabra2 << endl;
    return 0;
		}
		break;
		
		case 3:
			{
	string palabra;
   
    cout << "Introduce una palabra: ";
    cin>>palabra;
	    
    int longitud = palabra.length();

    string reves(longitud, '0');
	  
    for (int i = 0; i < longitud; ++i) {
        reves [i] = palabra[longitud - 1 - i];
    }
    cout << "Cadena invertida: " << reves << endl;

    return 0;
			}
			break;
			
			case 4:
			{
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

    cout << "La cantidad de veces que aparece <"<<caracter<<"> es " << pow << endl;

    return 0;
			}
			break;
	}
}
