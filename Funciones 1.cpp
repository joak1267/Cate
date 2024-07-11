// Funciones
// Encontrar el mayor de 2 numeros
#include <iostream>
using namespace std;

int encontrarMax(int x, int y);

//Prototipo de la funcion
int main(void){
int n1, n2;
int mayor;

cout << "Digite 2 numeros: ";
cin >> n1 >> n2;

mayor = encontrarMax(n1,n2);

cout << "el mayor de los 2 numeros es: " << mayor << endl;

return 0;
} 

// Definicion de la funcion
int encontrarMax(int x, int y){
   int numMax;
   
    if(x>y){
    numMax = x;
    }
    else{
    numMax = y;    
    }
    
    return numMax;
    }
