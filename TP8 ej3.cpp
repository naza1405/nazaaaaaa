#include<iostream>
using namespace std;

int funcion(char conversion, char medida, float tamano, string medid);

int main(){
	
	string medid;
	char conversion, medida;
	float tamano;
	
	cout << "ingrese el tamaño de su archivo" << endl;
	cin >> tamano;
	cout << "ingrese la medida en la que esta su archivo" << endl;
	cout << "A> bytes B> kigabytes  C> megabytes  D> gigabytes  E> terabytes" << endl;
	cin >> medida;
    cout << "ingrese la juan medida a la que queiere pasar"<<endl;
	cout << "A> bytes B> kigabytes  C> megabytes  D> gigabytes  E> terabytes" << endl;
	cin >> conversion;
	funcion(conversion, medida, tamano, medid);
}

int funcion(char conversion, char medida, float tamano, string medid)
{
	switch(medida)
	{
		case 'a':
		medid = "bytes";
		break;
		
		case 'b':
		medid = "KB";
		break;	
		
		case 'c':
		medid = "MB";
		break;	
		
		case 'd':
		medid = "GB";
		break;	
		
		case 'e':
		medid = "TB";
		break;			
	}
	
	switch(conversion)
	{
		case 'a':
		if (medid == "bytes")
		{
			cout << "este archivo ya esta en bytes" << endl;
	    }
	    
	    if (medid == "KB")
		{
	    	cout << tamano << medid << " > bytes = " << tamano/8 << " bytes" << endl;
	    }
	    
	    if(medid == "MB")
		{
			cout << tamano << medid << " > bytes = " << tamano/1028 << " KB" << endl;
	    }
	    
	    if(medid == "GB")
		{
			cout << tamano << medid << " > bytes = " << tamano/2028 << " bytes" << endl;
	    }
	    
	    if (medid == "TB")
		{
			cout << tamano << medid << " > bytes = " << tamano/3080 << " bytes" << endl;
	    }
		break;
		
		case 'b':
		if(medid == "bytes")
		{
			cout<<tamano<<medid<<" > KB = "<<tamano/8<<" KB"<<endl;
	    }
	    if(medid == "KB")
		{
			cout<<"el archivo ya esta en kigabytes"<<endl;
	    }
	    if(medid == "MB")
		{
			cout<<tamano<<medid<<" > KB = "<<tamano/1024<<" KB"<<endl;
	    }
	    if(medid == "GB")
		{
			cout<<tamano<<medid<<" > KB = "<<tamano/2048<<" KB"<<endl;
	    }
	    if(medid == "TB")
		{
			cout<<tamano<<medid<<" > KB = "<<tamano/3072<<" KB"<<endl;
	    }
		break;
	
		case 'c':
		if(medid == "bytes")
		{
			cout<<tamano<<medid<<" > MB = "<<tamano*1032<<" MB"<<endl;
	    }
	    if(medid == "KB")
		{
			cout<<tamano<<medid<<" > MB = "<<tamano*1024<<" MB"<<endl;
	    }
	    if(medid == "MB")
		{
			cout<<"el archivo ya esta en megabytes"<<endl;
	    }
	    if(medid == "GB")
		{
			cout<<tamano<<medid<<" > MB = "<<tamano/1024<<" MB"<<endl;
	    }
	    if(medid == "TB")
		{
			cout<<tamano<<medid<<" > MB = "<<tamano/2048<<" MB"<<endl;
	    }
		break;
		
		case 'd':
		if(medid == "bytes")
		{
			cout<<tamano<<medid<<" > GB = "<<tamano*2056<<" GB"<<endl;
	    }
	    if(medid == "KB")
		{
			cout<<tamano<<medid<<" > GB = "<<tamano*2048<<" GB"<<endl;
	    }
	    if(medid == "MB")
		{
			cout<<tamano<<medid<<" > GB = "<<tamano*1024<<" GB"<<endl;
	    }
	    if(medid == "GB")
		{
			cout<<"tu archivo ya esta en gigabytes"<<endl;
	    }
	    if(medid == "TB")
		{
			cout<<tamano<<medid<<" > GB = "<<tamano/1024<<" GB"<<endl;	
	    }
		break;
		
		case 'e':
		if(medid == "bytes")
		{
			cout<<tamano<<medid<<" > TB = "<<tamano*3080<<" TB"<<endl;
	    }
	    if(medid == "KB")
		{
			cout<<tamano<<medid<<" > TB = "<<tamano*3076<<" TB"<<endl;
	    }
	    if(medid == "MB")
		{
			cout<<tamano<<medid<<" > TB = "<<tamano*2048<<" TB"<<endl;
		}
	    if(medid == "GB")
		{
			cout<<tamano<<medid<<" > TB = "<<tamano*1024<<" TB"<<endl;
	    }
	    if(medid == "TB")
		{
			cout << "el archivo ya esta en terabytes" << endl;
	    }
		break;
	}
		
}
