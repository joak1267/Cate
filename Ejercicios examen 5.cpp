// Escribir un programa que acepte tres argumentos enteros e imprima "iguales" si los tres números son iguales o "no iguales" de lo contrario

#include <iostream>
using namespace std;

int main (){
    int n1,n2,n3;
    
    cout << "Introduzca 3 numeros enteros: " << endl;
    cin >> n1 >> n2 >> n3;
    
    if(n1==n2 && n2==n3){
        cout << "Los numeros son iguales " << endl;
    }else{
        cout << "los numeros no son iguales " << endl;
    }
    
    return 0;
}
