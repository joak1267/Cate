// Vectores
// Escriba un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equvale a la suma del resto de numeros del vector

#include <iostream>
using namespace std;
int main(void){
int numeros[100],n,mayor=0,suma=0;

cout << "ingrese la cantidad de numeros para el arreglo: ";
cin >> n;

for(int i=0; i<n; i++){
cout << "ingrese un numero: ";
cin >> numeros[i];
suma = suma + numeros[i];

if(numeros[i] > mayor){
 mayor = numeros[i];
}

}
if(mayor==suma-mayor){
cout << "Este es el numero que coincide con la suma de los elementos: " << mayor;
}
else{
cout << "No se encontro ninguna coincidencia";
}
return 0;
}

