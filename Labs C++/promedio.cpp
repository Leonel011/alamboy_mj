//Desarrolle un programa que permita determinar el promedio final obtenidopor un estudiante que realizó cuatro exámenes.
#include <iostream>
using namespace std;

int main()
{
    //Definir variables
    double nota1, nota2, nota3, nota4, notatotal, promedio;

    cout<<"Ingrese la puntuacion de la primer nota: ";
    cin >> nota1;

    cout<<"Ingrese la puntuacion de la segunda nota: ";
    cin >> nota2;

    cout<<"Igrese la puntuacion de la tercer nota: ";
    cin >> nota3;

    cout<<"Ingrese la puntuacion de la cuarta nota: ";
    cin>> nota4;

    notatotal = nota1 + nota2 + nota3 + nota4;
    promedio = notatotal/4;

    cout<<"El promedio final es: "<<promedio <<endl;

    return 0;
}