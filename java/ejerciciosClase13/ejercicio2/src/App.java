/*
Ejercicio 1 - Clase, objeto y atributos

Que archivos crear: 
    Estudiante.java
    App.java

Titulo del ejercicio: Ejercicio 1 - Clase, objeto y atributos
Autor: Pavel Ganchala

Enunciado:
    Crear una clase llamada Estudiante con los siguientes atributos: nombre, edad y carrera.
    Luego desde la clase principal, crear dos objetos y mostrar sus datos en consola.
*/

public class App {
    public static void main(String[] args) {

        //Creación de objetos de tipo Estudiante
        Estudiante estudiante1 = new Estudiante(); // Creo un primer objeto de tipo Estudiante llamado estudiante1

        estudiante1.nombre = "Pavel";// Asigno el valor "Juan" al atributo nombre del objeto estudiante1
        estudiante1.edad = 19; // Asigno el valor 20 al atributo edad del objeto estudiante1
        estudiante1.carrera = "Ciencia de Datos"; // Asigno el valor "Ciencia de Datos" al atributo carrera del objeto estudiante1

        Estudiante estudiante2 = new Estudiante(); // Creo un segundo objeto de tipo Estudiante llamado estudiante2
        estudiante2.nombre = "Ana";// Asigno el valor "Ana" al atributonombre del objeto estudiante2
        estudiante2.edad = 20; // Asigno el valor 22 al atributo edad del objeto estudiante2
        estudiante2.carrera = "Economia"; // Asigno el valor "Economia" al atributo carrera del objeto estudiante2

        System.out.println("=== ESTUDIANTE 1 ===");
        System.out.println("Nombre: " + estudiante1.nombre); // Muestro el nombre del primer estudiante en consola
        System.out.println("Edad: " + estudiante1.edad); // Muestro la edad del primer estudiante en consola
        System.out.println("Carrera: " + estudiante1.carrera); // Muestro la carrera del primer estudiante en consola


        System.out.println("=== ESTUDIANTE 2 ===");
        System.out.println("Nombre: " + estudiante2.nombre); // Muestro el nombre del segundo estudiante en consola
        System.out.println("Edad: " + estudiante2.edad); // Muestro la edad del segundo estudiante en consola
        System.out.println("Carrera: " + estudiante2.carrera); // Muestro la carrera del segundo estudiante en consola


        
    }
}
