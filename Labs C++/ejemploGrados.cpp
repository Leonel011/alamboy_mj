#include <iostream>
 using namespace std;
 int main()

{
    double celsius, fahrenheit;

    cout<<"Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout<<"La temperatura en grados celsius es equivalente a "<<fahrenheit<<" grados fahrenheit."<<endl;

    return 0;
}