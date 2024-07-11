/*Se solicita almacenar en un vector numeros enteros del 1 al 12 y se muestre
su equivalente a los meses de Enero y Diciembre*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int numero;
    int meses;
    
    cout << "Ingrese un numero equivalente a un mes:" << endl;
    cin >> meses;
    numero == meses;
    
    switch(meses){
        
        case 1: cout << "Enero" << endl; break;
        case 2: cout << "Febrero" << endl; break;
        case 3: cout << "Marzo" << endl; break;
        case 4: cout << "Abril" << endl; break;
        case 5: cout << "Mayo" << endl; break;
        case 6: cout << "Junio" << endl; break;
        case 7: cout << "Julio" << endl; break;
        case 8: cout << "Agosto" << endl; break;
        case 9: cout << "Septiembre" << endl; break;
        case 10: cout << "Octubre" << endl; break;
        case 11: cout << "Noviembre" << endl; break;
        case 12: cout << "Diciembre" << endl; break;
        
        default: cout << "no ingreso ningun numero equivalente al mes" << endl;
        
    }
    
    return 0;
}
