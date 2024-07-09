// Vectores
// Escribir un programa que defina un vector de numeros y calcule la suma de sus elementos

#include <iostream>
using namespace std;
int main(void){
int numero[5] = {1,2,3,4,5};  
int suma = 0;

for(int i=0; i<5; i++){
    suma = suma + numeros[i];    
}

cout << "las suma de los elementos es: " << suma << endl;

return 0;
}
