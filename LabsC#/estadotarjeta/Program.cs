//Desarrolle un programa que permita determinar si el usuario puede hacer prestamos de libros dependiendo del estado de su tarjeta.
//Que el usuario notifique si su tarjeta esta activa o inactiva

using System;
namespace EstadoTarjeta

{
    class Program 
    {
        static void Main(string[]args)

        {
            Console.Write("Ingrese el estado de la tarjeta como activa o inactiva: ");

            string estado = string.Parse(Console.ReadLine());
        }
    }
}