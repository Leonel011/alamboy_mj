//Desarrolle un programa que imprima diez veces la palabra “Hola ” y su nombre

using System;
namespace nombre
class Program
{
    static void Main(string[] args)

    {
        string nombre = "Adriel Lamboy";
    

        for (int i = 0; i < 10; i++)
        {
            Console.WriteLine("Hola" + nombre);
        }
    }
}