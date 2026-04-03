/*
Descripcion: 
    Clase hija que representa una Larva
*/

public class Larva extends Hormiga {

    public Larva(int id) {

        //Llamamos al constructor de la clase padre
        super(id, "Larva");

    }

    @Override
    public void mostrarAccion() {

        System.out.println("La larva esta creciedo dentro del hormiguero.");
        
    }

}
