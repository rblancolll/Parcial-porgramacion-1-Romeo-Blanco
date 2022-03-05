#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <conio.h> 
#include <vector>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 5
using namespace std;

int main(){
    int numero, factorial = 1;
    cout <<"FRACCION DE UN NUMERO"<<endl;
    cout<< "Ingrese un numero: "; cin>>numero;

    for(int i=1;i<=numero;i++){
	factorial = factorial * i;
    
	}

    cout <<"\nEl factorial del numero es: "<<factorial<<endl;

    cout <<"-----------------------------------------------------------"<<endl;
cout <<"TABLAS DE MULTIPLICAR"<<endl;
	int numero1;
	do{
		cout<<"INGRESE UN NUMERO DEL 1 AL 10: ";
		cin>>numero1;
		
	}while((numero1<1) || (numero1>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero1<<" * "<<i<<" = "<<numero1 * i<<endl;
	}

    return 0;
}
    
    




