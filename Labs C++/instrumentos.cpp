#include <iostream>
using namespace std;
int main()

{
    int instrumento;

    cout<<"Bienvenido a nuestra tienda de musica"<<endl;
    cout<<"Estos son los instrumentos que tenemos dispoibles"<<endl;
    cout<<"1. Guitarras "<<endl;
    cout<<"2. Pianos "<<endl;
    cout<<"3. Baterias "<<endl;
    cout<<"4. Violines"<<endl;
    cout<<"5. Flautas"<<endl;
    cin>>instrumento;

    switch (instrumento)

    {
        case 1: //Guitarras
        cout<<"Las guitarras tienen un 10 porciento de descuento."<<endl;
        break;

        case 2: //Pianos
        cout<<"Los pianos tienen un 15 porciento de descuento."<<endl;
        break;

        case 3: //Baterias
        cout<<"Las baterias tienen un 20 porciento de descuento."<<endl;
        break;

        case 4: //Violines
        cout<<"Los violines tienen un 12 porciento de descuento."<<endl;
        break;

        case 5: //Flautas
        cout<<"Las flautas tienen un 8 porciento de descuento."<<endl;
        break;

        default: //En caso de que el usuario ponga una opcion no valida.
        cout<<"Opcion no valida. Por favor, elija uno de los instrumentos mencionados."<<endl;


    }

    return 0;
}