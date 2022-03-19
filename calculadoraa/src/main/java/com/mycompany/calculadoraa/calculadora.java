
package com.mycompany.calculadoraa;


public class calculadora {
    //atributos
    private int op1;
    private int op2;

    public calculadora(){
    
    }

    public calculadora(int op1, int op2){
        this.op1 = op1;
        this.op2 = op2;

    }

    //Metodos
     public int sumar(){
       int suma = this.op1 + this.op2;
       return suma;   
     }
   
    
}
