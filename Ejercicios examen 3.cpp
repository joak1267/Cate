// Escribir un programa que tome dos números enteros a y b como argumentos e imprima un entero aleatorio entre a y b.

#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int a, b;
    int temp;
    cout << "Introduce dos números enteros: ";
    cin >> a >> b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    srand(time(0)); // Inicializa la semilla del generador de números aleatorios
    int random_integer = a + rand() % (b - a + 1);

    cout << "Número aleatorio entre " << a << " y " << b << ": " << random_integer << endl;

    return 0;
}
