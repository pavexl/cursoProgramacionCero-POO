/*
Ejercicio 3 - Mini sistema de hormigueo simplificado
Autor: Pavel Ganchala

Enunciado:
    Desarrollar un programa en Java que simule un minisistema de hormiguero en consola
    El sistema debe permitir:
        - crear hormigas
        - manejar dos tipos de hormiga: Larva y Soldado
        - Almacenar las homrigas en una lista
        - mostrar todas las hormigas registradas
        - alimentar una hormiga por su id
        - mostrar un comportamiento distinto segunm el tipo de hormiga
        - validar que el id exista
        - usar tru/catch para evitar errores de entrada
*/


import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Hormiguero hormiguero = new Hormiguero ();

        int opcion = 0;

        do {

            try {
                System.out.println("=== MENU HORMIGUERO ===");
                System.out.println("1. Agregar larva");
                System.out.println("2. Agregar soldado");
                System.out.println("3. Mostrar hormigas");
                System.out.println("4. Alimentar hormiga");
                System.out.println("5. Eliminar hormiga");
                System.out.println("6. Salir");
                System.out.println("Ingrese una opcion: ");


                opcion = sc.nextInt();

                switch(opcion) {
                    case 1:
                        System.out.println("Ingrese ID para la larva: ");
                        int idLarva = sc.nextInt();
                        hormiguero.agregarLarva(idLarva);
                        break;

                    case 2:
                        System.out.println("Ingrese ID para el soldado: ");
                        int idSoldado = sc.nextInt();
                        hormiguero.agregarSoldado(idSoldado);
                        break;

                    case 3:
                        hormiguero.mostrarHormigas();
                        break;

                    case 4:
                        System.out.println("Ingrese el ID de la hormiga a alimentar: ");
                        int idAlimentar = sc.nextInt();
                        hormiguero.alimentarHormiga(idAlimentar);
                        break;

                    case 5:
                        System.out.println("Ingrese el ID de la hormiga a eliminar: ");
                        int idEliminar = sc.nextInt();
                        hormiguero.eliminarHormiga(idEliminar);
                        break;

                    case 6:
                        System.out.println("Saliendo del programa... ");

                    default:
                        System.out.println("Opcion invalida, ingrese nuevamente.");
                }

            } catch(Exception e) {
                System.out.println("Error: ingreso invalido.");
                sc.nextLine(); //Limpiamos el buffer para evitar bucles infinitos
            }

        } while (opcion != 6);
            
        sc.close();
    }
}
