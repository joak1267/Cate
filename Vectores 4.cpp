//Vectores 4
//Escriba un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso del ultimo al primer elemento

#include <iostream>
using namespace std;
int main(void){
    int numeros[100],n;
    cout << "Digite el numero de valores que tendra el arreglo: ";
    cin >> n;
 
    for(int i=n-1; i>=0; i--){
    cout<<"Digite el numero de valores que estaran en los arreglos: ";
    cin >> numeros[i];
}
    for(int i=n-1; i>=0; i--){
    cout<< i << "->" << numeros[i] << endl;
}
    
    
    
return 0;
}


