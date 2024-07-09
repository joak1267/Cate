// Vectores 3
// Escribir un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros del vector con sus indices asociados

#include <iostream>
using namespace std;
int main(void){
    int numeros[100],n;
    
    cout << "Digite el numero de elementos: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
       cout << "Digite un numero: ";
       cin >> numeros[i];     
    }
    
    // Aca se muestra los elementos con sus indices
    for(int i=0; i<n; i++){
       cout << i << " -> " << numeros[i] << endl;
    }
    


return 0;
}
