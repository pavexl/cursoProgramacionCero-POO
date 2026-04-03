/*
Descripcion:
    Clase hija que hereda de Animal
    Representa un gato del refugio
*/

public class Gato extends Animal {

    //CONSTRUCTOR de Gato
    public Gato(String nombre, int edad) {

        //Llamamos al constructor de la clase padre (Animal), y con eso ya se hereda de la clase animal el this nombre y this edad, para que se inicialice y no tengamos que volver a repetir
        super(nombre, edad);
    }

    //Sobreescribimos el metodo hacerSonido()
    @Override
    public void hacerSonido() {
        System.out.println("Miau miau");
    }

}
