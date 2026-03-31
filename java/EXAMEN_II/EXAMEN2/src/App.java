import java.util.ArrayList;
import java.util.Scanner;

public class App {

    static ArrayList<Mascota> lista = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        
        int opcion;

        do {
            System.out.println("\n===== MENU =====");
            System.out.println("1. Registrar");
            System.out.println("2. Mostrar");
            System.out.println("3. Sonido");
            System.out.println("4. Buscar");
            System.out.println("5. Salir");
            System.out.print("Opcion: ");

            opcion = sc.nextInt();

        } while (opcion != 5);
        
    }
}
