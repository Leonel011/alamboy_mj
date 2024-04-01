//Crear un programa que determine si una tarjeta esta activa o inactiva
#include <iostream>
using namespace std;
int main()

{
    //Definir variable
    string estado;

    cout<<"Ingrese si su tarjeta esta activa o inactiva: ";
    cin>>estado;

    //Determinar si es activa o inactiva
    try
    {
        if (estado!="activa")
    {
        throw "No permite prestamos.";
    }
    cout<<"Puede realizar prestamos.";
    }
    catch(const char* mensaje)
    {
        cout<<"Excepcion capturada. "<<mensaje<<endl;
    }
    
    return 0;
}