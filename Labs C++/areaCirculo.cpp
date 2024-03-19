#include <iostream>
 using namespace std;
 int main()

{
    //Definir variables
    double radio, area;
    const double PI=3.14;

    cout<<"Ingresa la medida del radio: ";
    cin>> radio;

    area= PI * radio * radio;

    cout<<"El area del circulo es: "<<area<<endl;

    return 0;
}