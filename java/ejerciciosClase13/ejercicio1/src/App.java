public class App {
    
    public static void main(String[] args){
        
        Persona persona1 = new Persona(); //Aqui creamos un objeto de la clase Persona llamado persona1

        persona1.nombre = "Carlos"; //Asignamos un valor al atributo "nombre" del objeto "persona1"

        persona1.edad = 20; // Asignamos un valor al atributo edad del objeto

        System.out.println("Nombre: " + persona1.nombre); //Mostramos el nombre el consola
        System.out.println("Edad: " + persona1.edad); //Mostramos la edad en consola
        
    }// Fin del metodo main

}//Fin de la clase App
