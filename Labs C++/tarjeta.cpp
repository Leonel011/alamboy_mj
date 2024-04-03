#include <iostream>
using namespace std;
int main()

//Desarrolle un programa que solicite al usuario si el estado de la tarjeta es activo o inactivo
//Si es activo notifique que puede hacer prestamos, si es inactivo no podra hacer prestamos

{
    //Definir Variable

    string estado;

    cout<<"Ingrese si su tarjeta esta activa o inactiva: ";
    cin>> estado;

    //Determinar si es activa o inactiva

    if (estado == "activa")

    cout<<"Puede realizar prestamos."<<endl;

    else

    cout<<"No puede realizar prestamos."<<endl;

    return 0;
}
