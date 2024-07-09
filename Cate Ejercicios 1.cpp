/*Crear un programa que al recebir 2 numeros enteros, calcule la suma, resta y multiplicacios de dichos numeros*/

#include <iostream>
using namespace std;
int main(void){
    
    int n1, n2, suma, retsa, multiplicacion;
    
    cout << "ingrese el primer numero: " << endl;
    cin >> n1;
    cout << "ingrese el segundo numero: " << endl;
    cin >> n2;
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    
    cout << "La Suma de los dos numeros es: " << suma << endl;
    cout << "La Resta de los dos numeros es: " << resta << endl;
    cout << "La Multiplicacion de los dos numeros es: " << multiplicacion << endl;
}
