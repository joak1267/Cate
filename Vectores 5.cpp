//Vectores

// Desarrolle un programa que lea de la entrada estandar un vector de entradas y determine el mayor elemento del vector

#include <iostream>
using namespace std;
int main(void){
int numeros[100],n,mayor=0;

cout << "Digite el numero de elementos del arreglo: ";
cin >> n;

for(int i=0; i<n; i++){
cout << "Digite un numero: ";
cin >> numeros[i];

if(numeros[i] > mayor){
 mayor = numeros[i];
}

}
cout << "El mayor elemento del vector es: " << mayor << endl;

return 0;
}
