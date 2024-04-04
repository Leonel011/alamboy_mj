#include <iostream>
using namespace std;

int main()

{
    int opcion;

    cout<<"Bienvenido a Johana's Cafe: "<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. Cafe"<<endl;
    cout<<"2. Te"<<endl;
    cout<<"3. Chocolate caliente "<<endl;
    cout<<"4. Jugo de naranja"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Por favor selecciona tu bebida: ";
    cin>>opcion;

    switch (opcion)

    { 
        case 1: //Cafe
            cout<<"El precio del cafe es $2"<<endl;
            break;
        
        case 2: //Te
            cout<<"El precio del Te es $1.5"<<endl;
            break;

        case 3: //Chocolate caliente
            cout<<"El precio del chocolate caliente es $2.5"<<endl;
            break;

        case 4: // Jugo de Naranja
            cout<<"El precio del jugo de naranja es $3"<<endl;
            break;

        default: //En caso de que el usuario ingrese una opcion no valida
            cout<<"Opcion No valida. Por favor, seleccione una bebida del menu"<<endl;
    }

    return 0;
}