//Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro.
 
 #include <iostream>
 using namespace std;
 
 int main(){
    int n1 = 6, n2 = 4;
     
    if(n1%n2 == 0 || n2%n1 == 0){
        cout << "Los argumentos son divisibles por el otro " << endl;
    }
     return 0;
 }
