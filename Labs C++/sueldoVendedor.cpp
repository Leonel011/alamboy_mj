//Desarrolle un programa que permita determinar a través de una FUNCION
//El sueldo a pagar para un vendedor a base de un 15% de las ventas realizadas.
//Si el vendedor realizó 1500 dólares o más en ventas se pagará un bono adicional de $125 dólares.

#include <iostream>

using namespace std;

// Función para calcular el sueldo del vendedor
double calcularSueldo(double ventas) 
{
    double sueldo = ventas * 0.15; // 15% de las ventas

    // Si las ventas son 1500 o más, agregar bono adicional de $125
    if (ventas >= 1500) 
    {
        sueldo += 125;
    }

    return sueldo;
}

int main() 
{
    double ventas;

    cout << "Ingrese el monto total de ventas realizadas por el vendedor: $";
    cin >> ventas;

    // Llamar a la función para calcular el sueldo
    double sueldo_total = calcularSueldo(ventas);

    cout << "El sueldo a pagar para el vendedor es: $" << sueldo_total << endl;

    return 0;
}
