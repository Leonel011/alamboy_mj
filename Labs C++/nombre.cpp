//Desarrolle un programa que imprima diez veces la palabra “Hola ” y su nombre.
#include <iostream>
using namespace std;
int main()

{
    string nombre = "Adriel";

    for(int i = 0; i < 10; ++i)
    {
        cout<<"Hola "<< nombre <<endl;
    }

    return 0;
}