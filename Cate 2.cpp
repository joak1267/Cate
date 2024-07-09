//Construir un programa que, al recibir como datos el costo del articulo vendido y la cantidad de dinero entregada por el cliente, calcule e imprima el cambio que se debe entregar al cliente//
#include <iostream> 
using namespace std;
int main(void){
    
    double costo, pago, cambio;
    
    cout << "ingrese el costo del articulo vendido: "  << endl;
    cin >> costo;
    cout << "Ingrese la cantidad de dinero entregado por el cliente: " << endl;
    cin >> pago;
    
    cambio = pago - costo;
    
    cout << "El cambio es: " << cambio << endl;
}
