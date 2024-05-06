//Desarrolle un programa que determine si un cliente qualifica para un descuento especial
//si su compra es igual o mayor a $150 o tiene membresia VIP.
#include <iostream>
using namespace std;
int main()

{
    //Determine los detalles del cliente: Si es miembro VIP o no y si su compra sobrepasa 150 dolares.
    string miembro;
    double compra;

    cout<<"Es miembro VIP de la tienda. Escriba Si o No: ";
    cin>>miembro;

    cout<<"Escriba el total de su compra: ";
    cin>>compra;

    //Determine si qualifica para el descuento especial.

    if(compra >= 150 || miembro == "Si")
    {
        cout<<"Se le aplicara un descuento especial a su compra."<<endl;
    }
    else
    {
        cout << "No qualifica para el descuento especial."<<endl;
    }

    return 0;
}