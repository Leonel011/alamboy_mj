#include <iostream>
using namespace std;
int main() 
{
    int size;
    
    // Determine el size del arreglo con un numero entre 1 y 100.
    cout << "Ingrese el size del arreglo (entre 1 y 100): ";
    cin >> size;
    
    if (size < 1 || size > 100) 
    {
        cout << "Size del arreglo debe estar entre 1 y 100." << endl;
        return 1;
    }
    
    int arreglo[size];
    
    // Determine los numeros que formaran parte de los elementos.
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    
    // Sumar los elementos del arreglo.
    int suma = 0;
    for (int i = 0; i < size; i++) 
    {
        suma += arreglo[i];
    }
    
    cout << "La suma de los elementos del arreglo es: " << suma << endl;
    
    return 0;
}
