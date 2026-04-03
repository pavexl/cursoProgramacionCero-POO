/*
Descripcion:
    Clase hija que hereda de Animal
    Representa un perro del refugio
*/

public class Perro extends Animal {
    //CONSTRUCTOR de Perro
    public Perro(String nombre, int edad) {

        //Llamamos al constructor de la clase padre (Animal) 
        super(nombre, edad);
    }

    //Sobreescribimos el metodo hacerSonido()
    @Override
    public void hacerSonido() {
        System.out.println("Guau guau");
    }

}
