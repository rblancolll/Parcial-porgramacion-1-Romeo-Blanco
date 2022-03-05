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
    
    cout <<"-----------------------------------------------------------"<<endl;
	   cout <<"DIA LABORAL O NO LABORAL"<<endl;
	    int num;
	    cout << "Elige un dia de la semana" << endl;
        cout << "1. Lunes" << endl;
        cout << "2. Martes" << endl;
        cout << "3. Miercoles" << endl;
        cout << "4. Jueves" << endl;
        cout << "5. Viernes" << endl;
        cout << "6. Sabado" << endl;
        cout << "7. Domingo" << endl;
        
        cin >>num;
        
        switch (num) {
            case 1:
                cout << "Dia laboral ";
                break;
                
            case 2:
                cout << "Dia laboral";
                break;
                
            case 3:
                cout << "Dia laboral";
                break;
                
            case 4:
                cout << "Dia laboral";
                break;
			
			case 5:
                cout << "Dia laboral";
                break;      
            
			case 6:
                cout << "Descanso de fin de semana";
                break;      
            
			case 7:
                cout << "Descanso de fin de semana";
                break;      
            default: cout<<"Error de opcion.";        
	        
	   }
	   
       cout <<"  "<<endl; system("pause");
    return 0;
}
    
    




