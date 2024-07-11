//Escribir un programa que tome tres argumentos enteros positivos e imprima "falso" si alguno es igual o mayor a la suma de los otros dos, o "verdadero" en caso contrario.

#include <iostream>
using namespace std;
int main(){
    int n1 = 24, n2 = 4, n3 = 8;
    
    
    if(n1+n2<=n3 || n2+n3<=n1 || n1+n3<=n2){
       cout << "No es mayor " <<endl;
    }else{
        cout << "Si es mayor " << endl;
    } 
    
    return 0;
}
