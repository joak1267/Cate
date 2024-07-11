/* Se necesita un Programa que informe el total a pagar por el 
servicio de estacionamiento, teniendo en cuenta que por la primera hora se tiene
una tarifa de 500 y las restantes tiene un costo de 250, Se tiene como dato:
Hora entrada y hora salida (EN FORMATO MILITAR), indica una hora se cobra el Total
como si hubiera sido una hora completa*/
#include <iostream>
using namespace std;

int TARIFA_primera_hora = 500;
int TARIFA_horas_restantes = 250;

int CostoEstacionamiento(int horaEntrada, int horaSalida) {
    if (horaSalida <= horaEntrada) {
        horaSalida += 24;
    }
    
    int horasEstacionamiento = horaSalida - horaEntrada;
    
    int costoTotal;
    if (horasEstacionamiento <= 1) {
        costoTotal = TARIFA_primera_hora;
    } else {
        costoTotal = TARIFA_primera_hora + TARIFA_horas_restantes * (horasEstacionamiento - 1);
    }
    return costoTotal;
}

int main() {
    int horaEntrada, horaSalida;
    
    
    cout << "Ingrese la hora de entrada ( En formato militar, de 0 a 23): ";
    cin >> horaEntrada;
    cout << "Ingrese la hora de salida (En formato militar, de 0 a 23): ";
    cin >> horaSalida;
    
   
    int costoTotal = CostoEstacionamiento(horaEntrada, horaSalida);
    
    cout << "El costo total del estacionamiento es: " << costoTotal << " pesos " << endl;
    
    return 0;
}
