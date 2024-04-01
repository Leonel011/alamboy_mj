#include <iostream>
using namespace std;
int main()

{
    string estado;

    cout<<"Ingrese si su tarjeta esta activa o inactiva: ";
    cin>>estado;

    if (estado=="activa")
    {
        throw "Puede realizar prestamos."
    }
}