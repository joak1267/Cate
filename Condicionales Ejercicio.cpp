//Escriba un programa que lea tres numeros y determine cual de ellos es mayor

#include <iostream>
using namespace std;
int main (void){
  int n1, n2, n3;
  
  cout << "Digite 3 numeros";
  cin >> n1 >> n2 >> n3;
  
  if(n1>n2){
  cout << "el mayor es: " << n1;
  }
  else if(n2>n1){
  cout << "el mayor es: " << n2;
  }
  else if(n3>n1){
  cout << "el mayor es: " << n3;
  }
  else if(n3>n2){
  cout << "el mayor es: " << n3;
  }
  else if(n1>n3){
  cout << "el mayor es: " << n1;
  }
  else if(n2>n3){
  cout << "el mayor es: " << n2;
  }
  
  
  
  return 0;
}
