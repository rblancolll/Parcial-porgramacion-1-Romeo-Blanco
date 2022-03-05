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

    cout <<"-----------------------------------------------------------"<<endl;
     cout <<"NUMERO PARES E IMPARES"<<endl;
	 int n, n2, impar= 0, par = 0, sumaPar = 0, sumaImpar = 0, sumaPar1 = 0, sumaImpar1 = 0, par1 = 0;
 
    for (int i = 0 ; i < 10; i++)
    {
        cout << "(" << i + 1 << "/10): ";
        cin >> n;
        
        
        if (n % 2 == 0)
        {
            sumaImpar += n;
            impar++;
        }
        else
            sumaPar += n;
    
        
        if (n % 2 == 0)
        {
            sumaPar1 += n;
            par1++;
        }
      else
            sumaImpar1 += n;
	  
      }
 
    cout << "\nLa suma de los numeros impares es: " << sumaPar << endl;
    cout << "\nLa suma de los numeros pares es: " << sumaImpar << endl;
	cout << "El promedio de los numeros impares es: " << float(sumaImpar1/impar) << endl;
    cout << "\nLos numeros pares son: " << par1 << endl;
    
    return 0;
}
    
    




