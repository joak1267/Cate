//Escribir un programa que declare un array de tipo int que almacene los primeros diez n�meros naturales. Imprimir el array un elemento por l�nea.

#include <iostream>
using namespace std;
int main() {
    int numeros[10];
    
    for (int i = 0; i < 10; ++i) {
        numeros[i] = i + 1; 
    }
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << endl;
    }

    return 0;
}
