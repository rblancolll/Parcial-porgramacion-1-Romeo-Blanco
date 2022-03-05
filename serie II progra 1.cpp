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


    return 0;
}
    
    




