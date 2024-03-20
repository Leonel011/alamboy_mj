//Desarrolle un algoritmo que permita determinar el Área de un Cuadrado.
#include <iostream>
using namespace std;
int main()

{
    //Definir variable
    int lado, area;

    cout<<"Ingrese la medida de un lado del cuadrado: ";
    cin>>lado;

    area = lado * lado;

    cout<<"El area del cuadrado es: "<<area<<endl;
    
    return 0;
}

