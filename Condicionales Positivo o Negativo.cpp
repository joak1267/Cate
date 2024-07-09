// Determinar si un numero es positivo o negativo

#include <iostream>
using namespace std;
int main (void){
  int numero;
  
  cout << "Digite un numero: ";
  cin >> numero;
  
  if(numero==0){
  cout << "el numero es Cero";
  }
  else if(numero>0){
  cout << "el numero es positivo";
  }
  else{
  cout << "el numero es negativo";
  }


return 0;
}
