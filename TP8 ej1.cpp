#include<iostream>
using namespace std;

int funcion(int a, int b, char eleccion);

int main()
{
	int num1, num2;
	char operacion;
	
	cout << "ingrese el tipo de operacion que quiere utlizar" << endl;
	cout << "<A>suma  <B>resta  <C>multiplicacion  <D>division" << endl;
	cin >> operacion;
	cout << "ingrese su primer numero: ";
	cin >> num1;
	cout << "ingrese su segundo numero: ";
	cin >> num2;
	funcion (num1, num2, operacion);
}

int funcion(int a, int b, char operacion)
{	
	switch(operacion)
	{	
		case 'a':
		cout << "la suma de sus numero es: " << a+b << endl;
		break;
		
		case 'b':
		cout << "la resta de sus numero es: " << a-b << endl;
		break;	
		
		case 'c':
		cout << "la multiplicacion de sus numero es: " << a*b << endl;
		break;	
		
		case 'd':
		cout << "la division de sus numero es: " << a/b << endl;
		break;		
	}
}
