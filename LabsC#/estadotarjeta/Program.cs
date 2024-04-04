//Desarrolle un programa que permita determinar si el usuario puede hacer prestamos de libros dependiendo del estado de su tarjeta.
//Que el usuario notifique si su tarjeta esta activa o inactiva

using System;
namespace EstadoTarjeta

{
    class Program 
    {
        static void Main(string[]args)

//Solicite datos al usuario
        {
            Console.Write("Ingrese el estado de la tarjeta como activa o inactiva: ");

            string estado = Console.ReadLine();

//Determine si puede o no puede hacer prestamos 
            if (estado == "activa")
            {
                Console.WriteLine("Puede hacer prestamos.");
            }

            else
            {
                Console.WriteLine("No puede hacer prestamos.");
            }
        }
    }
}