import java.util.Scanner;
public class App
{
    public static void main(String[] args)

    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter how many years you have worked in the business: ");
        int years = scanner.nextInt();

        if (years >= 5 )
        {
            System.out.println("Will recieve a bonus of 1000");
        }

        if (years < 5)
        {
            System.out.println("Will not recieve a bonus.");
        }
    }
}