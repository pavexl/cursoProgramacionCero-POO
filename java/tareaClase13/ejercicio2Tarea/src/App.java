public class App {
    public static void main(String[] args) {
        // Crear objeto
        Telefono t1 = new Telefono("Samsung", "A15", 250.0);

        System.out.println("=== DATOS INICIALES ===");
        t1.mostrarInfo();

        // Cambiar datos
        t1.setPrecio(300.0);

        System.out.println("\n=== DATOS ACTUALIZADOS ===");
        t1.mostrarInfo();

        // Probar precio inválido
        t1.setPrecio(-50);

        System.out.println("\n=== Intento de precio invalido ===");
        t1.mostrarInfo();
    }
}
