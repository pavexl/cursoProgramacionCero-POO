/*
Ejercicio 2 - Sistema simple de animales del refugio
Autor: Pavel Ganchala

Enunciado:
    Desarrollar un programa en Java que permita representar animales dentro de un refugio

    El sistema debe contar con:
        - una clase base llamada Animal
        - dos subclases llamadas Perro y Gato
        - un metodo llamado hacerSonido() que se comporte de manera distinta en cada subclase
        - una coleccion que almacene varios animales
        - un recorrrido que muetre la informacion y sonido de cada animal
*/

import java.util.ArrayList;

public class App {
    public static void main(String[] args) {
        //Creamos una lista de tipo Animal
        ArrayList<Animal> animales = new ArrayList<>();

        //Agregamos objetos de distinta subclase
        animales.add(new Perro("Michael", 5));
        animales.add(new Gato("Michu", 2));
        animales.add(new Perro("Crazy", 10));

        //Recorremos la lista
        for(Animal animal : animales) {
            animal.mostrarInfo();
            animal.hacerSonido();
            System.out.println("------------------");
        }


    }
}
