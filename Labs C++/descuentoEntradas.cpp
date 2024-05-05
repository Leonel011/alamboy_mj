//Desarrolle un sistema de venta de boletos para un teatro. Las reglas para la venta de boletos son las siguientes:
//1. Si la persona que compra es un miembro del teatro, recibe un 10% dedescuento en todas las entradas.
//2. Además, si la persona es miembro del teatro y compra más de 5 entradas,recibe un descuento adicional del 5%.
//3. Si la persona no es miembro del teatro, pero compra más de 10 entradas,recibe un 5% de descuento
#include <iostream>
using namespace std;
int main()

{
    

    int boletos;
    double precio=10,costo,preciofinal,descuento;
    string miembro;

    //Determine si es miembro del teatro.
    cout<<"Si usted es miembro del teatro escriba Si sino escriba No: ";
    cin>>miembro;

    cout<<"El precio de los boletos es "<<precio<<endl;
    cout<<"Ingrese cuantos boletos comprara: ";
    cin>>boletos;

    //Determine que descuento se aplicara.

   
    if(miembro == "Si")
    {
        if(boletos > 5)
        {
            costo = precio * boletos;
            descuento = costo * .15;
            precio = costo - descuento;
        }

            if(boletos <= 5)
            {
                costo = precio * boletos;
                descuento = costo * .10;
                preciofinal = costo - descuento;
            }
        
        cout<<"El precio a pagar es: "<<preciofinal<<endl;

    }
    
    if(miembro == "No")
    {
        if(boletos > 10)
        {
            costo = precio * boletos;
            descuento = costo * .05;
            preciofinal = costo - descuento;
        }

        if(boletos <= 10)
        {
            preciofinal= precio * boletos;
            
        }
        cout<<"El precio a pagar es: "<<preciofinal<<endl;
    }

    return 0;
}