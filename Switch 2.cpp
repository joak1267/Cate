// Switch 2
// Condicionales multiples

#include <stdio.h>
using namespace std;
int main(void){
   int numero;
   printf("Digite un numero entre (1-3): ");
   scanf("%i",&numero); 
    
    switch(numero){
    case 1: printf("Es el numero 1");
    break;               
    case 2: printf("Es el numero 2");
    break; 
    case 3: printf("Es el numero 3");
    break; 
    default: printf("no digito un numero correcto");
    }
return 0;
}
