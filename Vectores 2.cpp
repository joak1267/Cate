// Vectores
// Escribir un programa que defina un vector de numeros y calcule la multiplicacion de sus elementos
#include <iostream>
using namespace std;
int main(void){
int numeros[] = {1,2,3,4,5};
int multiplicacion = 1;

for(int i=0; i<5; i++){
multiplicacion = multiplicacion * numeros[i];
}

cout << "El calculo de los elementos es: " << multiplicacion << endl;

 return 0;
}
