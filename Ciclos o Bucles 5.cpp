// Realice un programa que solicite la entrada estandar de un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar

#include <iostream>
using namespace std;
int main(void){
    int numero;
    
    do{
    cout << "Digite un numero: ";
    cin >> numero;
   }while((numero<1) || (numero>10));
   
   for(int i=1; i<=20; i++){
       cout << numero << " * " << i << " = " << numero*i << endl;       
   }
    
    return 0;
}
