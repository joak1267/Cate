//Funciones
//Sacar el Valor absoluto de un numero

#include <iostream>
using namespace std;

//Prototipo de Funcion
template <class TIPOA>
void mostrarAbsoluto(TIPOA numero);

int main(void){
int n1 = 4;
float n2 = 40.52;
double n3 = 124.5679;

mostrarAbsoluto(n1);
mostrarAbsoluto(n2);
mostrarAbsoluto(n3);

return 0;
}

template <class TIPOA>
void mostrarAbsoluto(TIPOA numero){
if(numero<0){
numero = numero * -1;             
}     
  cout << "El valor absoluto del numeros es: " << numero << endl;       
}
