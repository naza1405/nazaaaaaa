#include<iostream>
#include<string>

using namespace std;

int main()
{
	string palabra;
	
	cout<<"digame una palabra y le dire cuanto mide:"<<endl;
	cin>>palabra;
	
	cout<<"la longitud que tiene es un total de "<<palabra.length()<<" letras"<<endl;
	return 0;
}
