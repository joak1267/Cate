//Practica VIDEO INFORMATIVO
 #include <stdio.h>
 #include <iostream>
 using namespace std;
 
 int main(){
     int resultado;
     int n1 ;
     int n2 ;
     
     cout << "Dame el Numero 1 y 2: " << endl;
     cin >> n1 >> n2;
     
     resultado = n1 * n2;
     
     cout << "El resultado es: \n" << resultado << endl;
    
     if(resultado>=20){
         cout << "Es mayor o igual a 20" << endl;
     }else{
         cout << "no es mayor a 20" << endl;
     }
     return 0;
 }
