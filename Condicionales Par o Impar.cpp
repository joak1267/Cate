// Determinar si un numero es par o impar

#include <iostream>
using namespace std;
int main (void){
  int numero;
  
  cout << "Digite un numero: ";
  cin >> numero;
  
  if(numero==0){
  cout << "el numero es Cero";
  }
  else if(numero%2==0){
  cout << "el numero es par";
  }
  else{
  cout << "el numero es impar";
  }


return 0;
}
