#include<iostream>
#include<string>
int funcion();
using namespace std;
int main(){
	
	funcion();
	
}

int funcion(){
	

	
	string palabra1, palabra2;
	int contador = 0;
	int ancont = 0;
	int a = 0;
	int b = 0;
	
	cout<<"ingrese su primer palabra: ";
	cin>>palabra1;
	cout<<"ingrese su segunda palabra: ";
	cin>>palabra2;
	
	int pa1 = palabra1.size();
	int pa2 = palabra2.size();
	
	if(pa1 == pa2){
		
	while(true){
		
		if(palabra1.at(a) == palabra2.at(b)){
		contador += 1;
		ancont = 0;
		a += 1;
		b = 0;
		  
		}
		
		else{
		b += 1;
		ancont += 1;
				
		}
		
		if(ancont == pa2){
			cout<<"las palabras no son agrarias"<<endl;
			return 0;
		}
		
		
		if(contador == pa1){
		cout<<"las palabras son agrarias"<<endl;
		return 0;
		}
		else{
	
		}
		
		
	}
	
}
	else{
	cout<<"tienen que ser palabras de la misma longitud"<<endl;
	system("pause");
	system("cls");
	return main();
	}
	
}
