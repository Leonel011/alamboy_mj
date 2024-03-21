// Desarrolle un algoritmo que permita calcular el área y el perímetro de un rectángulo. 

#include <iostream>
using namespace std;
int main()

{
    //definir variables

    int altura, base, area, perimetro;

    cout<<"Ingrese la altura del rectangulo: ";
    cin>> altura;

    cout<<"Ingrese la base del rectangulo: ";
    cin>>base;

    //Calcular el area

    area = base * altura;

    //calcular el perimetro

    perimetro = (2 * altura) + (2 * base);

    cout<<"El area del rectangulo es: "<<area<<endl;
    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;

    return 0;
}