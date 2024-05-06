//Desarrolle un codigo que solicite los nombres de estudiantes y sus notas.
//luego calcule el promedio de la clase.
#include <iostream>
using namespace std;
int main()
{
    //Determinar las variables
    string estudiante;
    double promedio,calificacion;
    double sumaCalificacion = 0;
    //Solicitar los datos para cada estudiante usando ciclo for.

    for (int i = 1; i <= 10; i++) 
    {
        cout << "Estudiante #" << i <<"  " << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> estudiante;

        cout<< "Ingrese la calificacion de "<< estudiante + ": ";
        cin>> calificacion;

        sumaCalificacion = sumaCalificacion + calificacion;

    }

    promedio = sumaCalificacion / calificacion;

    cout << "El promedio general de la calificaciones del grupo es: " << promedio << endl;

    return 0;
}