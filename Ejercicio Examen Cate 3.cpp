/* Se solicita el ingreo de 2 numeros, verificar que sean enteros y positivos:
A: Mostrar el producto pór el metodo de sumas sucesivas*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n1,n2;
    ;
    cout << "ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    
    if(n1,n2 >= 0){
        cout << "Los numeros ingresado son enteros y positivos o iguales a 0" << endl;
    } else if(n1 < 0 && n2 < 0 && n1,n2 < 0){
        cout << "el primer o segundo numero ingresado no es positivo";
    }
    
    return 0;
}
