import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double[] temperaturas = new double[12];
        double sumaTemperaturas = 0.0;

        // Conseguir las temperaturas de los 12 meses
        for (int i = 0; i < 12; i++) {
            System.out.print("Ingrese la temperatura del mes " + (i + 1) + ": ");
            temperaturas[i] = scanner.nextDouble();
            sumaTemperaturas += temperaturas[i];
        }

        // Conseguir el promedio de las temperaturas durante los 12 meses
        double promedio = sumaTemperaturas / 12;

        System.out.println("El promedio de las temperaturas anuales es: " + promedio + " grados");
    }
}
