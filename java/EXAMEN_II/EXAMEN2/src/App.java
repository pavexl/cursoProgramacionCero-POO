import java.util.ArrayList;
import java.util.Scanner;

public class App {

    static ArrayList<Mascota> lista = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        
        int opcion;

        do {
            System.out.println("\n===== MENU =====");
            System.out.println("1. Registrar mascota");
            System.out.println("2. Mostrar mascotas");
            System.out.println("3. Ejecutar sonido de mascotas");
            System.out.println("4. Buscar por nombre");
            System.out.println("5. Salir");
            System.out.print("Opcion: ");

            opcion = sc.nextInt();

            switch (opcion) {
                case 1:
                    registrar();
                    break;
                case 2:
                    mostrar();
                    break;
                case 3:
                    sonido();
                    break;
                case 4:
                    buscarNombre();
                    break;
                case 5:
                    System.out.println("Saliendo...");
                    break;
                default:
                    System.out.println("Opcion invalida");
            }

        } while (opcion != 5);
        
    }

    static void registrar() {
    try {
        System.out.println("1. Perro");
        System.out.println("2. Gato");
        System.out.print("Tipo: ");
        int tipo = sc.nextInt();

        System.out.print("ID: ");
        int id = sc.nextInt();

        sc.nextLine(); // limpiar buffer
        System.out.print("Nombre: ");
        String nombre = sc.nextLine();

        System.out.print("Edad: ");
        int edad = sc.nextInt();

        // Validación
        if (id <= 0 || edad <= 0 || nombre.isEmpty()) {
            System.out.println("Datos invalidos");
            return;
        }

        Mascota m;

        if (tipo == 1)
            m = new Perro(id, nombre, edad);
        else if (tipo == 2)
            m = new Gato(id, nombre, edad);
        else {
            System.out.println("Tipo invalido");
            return;
        }

        lista.add(m);
        System.out.println("Mascota registrada");

    } catch (Exception e) {
        System.out.println("Error en entrada");
        sc.nextLine();
    }
    }

    static void mostrar() {
    if (lista.isEmpty()) {
        System.out.println("Lista vacia");
        return;
    }

    for (Mascota m : lista) {
        m.mostrarInfo();
        System.out.println("Tipo: " + m.getClass().getSimpleName());
        System.out.println("Sonido: " + m.hacerSonido());
        System.out.println("------------------");
    }
    }

    static void sonido() {
        System.out.print("Ingrese ID: ");
        int id = sc.nextInt();

        for (Mascota m : lista) {
            if (m.getId() == id) {
                System.out.println(m.hacerSonido());
                return;
            }
        }
    
        System.out.println("Mascota no encontrada");
    }

    static void buscarNombre() {
        sc.nextLine(); // limpiar buffer
        System.out.print("Nombre: ");
        String nombre = sc.nextLine();

        for (Mascota m : lista) {
            if (m.getNombre().equalsIgnoreCase(nombre)) {
                m.mostrarInfo();
                return;
            }
        }

        System.out.println("Mascota no encontrada");
    }

   
}


