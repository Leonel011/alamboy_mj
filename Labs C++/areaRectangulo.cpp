//Desarrolle un algoritmo que permita determinar el Área de un Rectángulo a partir de su altura y su base.

#include <iostream>
using namespace std;
int main()

{
    //definir variables

    int base, altura, area;

    cout<<"Ingrese la base del rectangulo: ";
    cin>>base;

    cout<<"Ingrese la aultura del rectangulo; ";
    cin>> altura;

    //Conseguir el area del rectangulo.

    area = base * altura;

    cout<<"El area del rectangulo es: "<<area<<endl;

    return 0;

}
