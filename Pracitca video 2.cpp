// Pedir la calificacion de 3 materias de un mismo alumno, sumarlas y sacar
// el promedio. Si el promedio es mayor o igual a 70, aprueba de la contrario "Reprueba".

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int calificacion1, calificacion2, calificacion3;
    
    cout << "Dame la califcacion de las 3 materias: " << endl;
    cin >> calificacion1 >> calificacion2 >> calificacion3;
    
    float promedio;
    
    promedio = (calificacion1 + calificacion2 + calificacion3) % (3);
    
    if(promedio >= 70){
        cout << "Aprobo el año" << endl;
        
    }else{
        cout << "Reprueba el año" << endl;
    }
    
    return 0;
}
