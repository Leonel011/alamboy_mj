//Desarrolle un algoritmo que permita determinar la edad aproximada de una persona a base del año en que nació y el año actual
#include <iostream>
using namespace std;

int main()
{
    //Definir variables.

    int birthYear, currentYear, age;

    cout<<"Ingrese su año de nacimiento: ";
    cin>>birthYear;

    cout<<"Ingrese el año actual: ";
    cin>>currentYear;

    age = currentYear - birthYear;

    cout<<"Su edad aproximada es: "<<age<<endl;

    return 0;
}