//Desarrolla un algoritmo que calcule la distancia total recorrida en un viaje,dada la velocidad promedio y el tiempo de viaje.

#include <iostream>
 using namespace std;
 int main()

{
    //definir variables
    double velocidad, tiempo, distancia;

    cout<<"Ingrese la velocidad promedio durante el viaje: ";
    cin>>velocidad;

    cout<<"Ingrese el tiempo que le tomo llegar: ";
    cin>>tiempo;

    distancia = velocidad * tiempo;

    cout<<"La distancia recorrida fue: "<<distancia<<endl;
    
    return 0;
}