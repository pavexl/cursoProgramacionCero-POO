/*
Descripcion:
    Clase padre que representa un animal general
    Aqui colocamos lo que t0dos los animales tienen en comun
*/

public class Animal {
    //ATRIBUTOS comutes para todos los animales
    private String nombre;
    private int edad;

    //CONSTRUCTOR de la clase padre (Animal)
    public Animal(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    //METODOS comunes para todos los animales

    //Metodo para mostrar la informacion basica
    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad + " años");

    }

    //Metodo que luego sera sobreescrito por las subclases
    public void hacerSonido() {
        System.out.println("El animal hace un sonido");
    }




}
