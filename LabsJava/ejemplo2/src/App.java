import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un numero entero: ");
        int entero = scanner.nextInt();

        System.out.print("Ingrese un numero flotante: ");
        float flotante = scanner.nextFloat();

        System.out.print("Ingrese un caracter: ");
        char caracter = scanner.next() .charAt(0);

        scanner.next.Line();

        System.out.print("Ingrese una cadena de caracteres: ");
        String cadena = scanner .nextLine();
    }
}