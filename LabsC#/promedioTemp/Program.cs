using System;
class Program
{
    static void Main(string[] args)
    {
        int meses = 12;

        double[] temperatura=new double[meses];
        double sumaTemperatura = 0;

        //Conseguir las temperaturas de cada mes.
        for (int i = 0; i < meses; i++)
        {
            Console.Write("Ingrese la temperatura del mes "+(i + 1)+": ")
            temperatura[i]= Convert.ToDouble(Console.ReadLine());
            sumaTemperatura += temperatura[i];
        }

        //Conseguir el promedio de temperatura durante los 12 meses.
        double promedio = sumaTemperatura / meses;

        Console.WriteLine("El promedio de las temperaturas durante los 12 meses es: "+ promedio+" grados");
        
    }
}