public class App {
    public static void main(String[] args) {

        // Crear objetos
        Mascota m1 = new Mascota("Firulais", "Perro", 3);
        Mascota m2 = new Mascota("Michi", "Gato", 2);

        System.out.println("=== Mascota 1 ===");
        m1.mostrarInfo();

        System.out.println("\n=== Mascota 2 ===");
        m2.mostrarInfo();
    }
        
}

