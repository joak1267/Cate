// Condicionales if / else
// Escriba un programa que lea dos numeros y determine cual de ellos es mayor

#include<iostream>
using namespace std;
int main (void){
    int n1, n2;
    
    cout << "Digite 2 numeros: ";
    cin >> n1 >> n2;
    
    if(n1==n2){
    cout << "los numeros son iguales: ";
    }
    else if(n1>n2){
    cout << "el mayor es: " << n1;
    }
    else{
    cout << "el mayor es: " << n2;     
    }

  return 0;
}
