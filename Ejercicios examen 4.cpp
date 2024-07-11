//Escribir un programa que imprima la suma de dos enteros aleatorios entre 1 y 6 como cuando tiras dos dados.

#include <iostream>
using namespace std;
int main(){
    srand(time (0));
    
    int n1 = 1 + rand() % 6;
    int n2 = 1 + rand() % 6;
    
    int suma = n1 + n2;
    
    cout << "Primer dado: " << n1 << endl;
    cout << "Segundo dado: " << n2 << endl;
    cout << "Suma: " << suma << endl;
    
    return 0;
}
