//Desarrolle un programa que determine el promedio de 12 temperaturas recogidas
//durante los meses de un año. Las temperaturas entre cada mes pueden variar.

#include<iostream>
using namespace std;
int main()

{
    int meses = 12;
    double temperatura,promedio;
    double sumaTemperatura = 0;

    //Solicitar las temperaturas de los 12 meses.

    for(int i = 0;i < meses; i++)
    {
        cout<<"La temperatura del mes "<< i + 1 <<": ";
        cin>>temperatura;
        sumaTemperatura += temperatura;
    }
    //Calcular el promedio de temperatura durante los 12 meses.

    promedio = sumaTemperatura / meses;
    cout<<"El promedio de las temperaturas durante el año fue: "<<promedio<<"grados"<<endl;

    return 0;
}