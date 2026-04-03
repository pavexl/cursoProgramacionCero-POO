/*
Titulo: Ejercicio 2 - Metodos y constructor
Autor: Pavel Ganchala

Enunciado:
    Crear una clase llamada Producto con los atributos nombre, precio y stock
    La clase debe tener un constructor, un metodo para mostrar informacion
    Y tambien un metodo para calcular el valor total del inventario




*/

public class App {
    public static void main(String[] args) {

        Producto producto1 = new Producto("Laptop", 1200.50, 10); // Creamos el primer objeto de la clase Producto con el constructor
        Producto producto2 = new Producto("Smartphone", 800.00, 20); // Creamos el segundo objeto de la clase Producto con el constructor

        System.out.println("=== PRODUCTO 1 ===");
        producto1.mostrarInfo(); // Llamamos al metodo mostrarInfo del primer objeto
        System.out.println("Valor total del inventario: " + producto1.calcularValorInventario()); // Mostramos el resultado del metodo calcularValorInventario del primer objeto
        

        System.out.println();

        System.out.println("=== PRODUCTO 2 ===");
        producto2.mostrarInfo(); // Llamamos al metodo mostrarInfo del segundo objeto
        System.out.println("Valor total del inventario: " + producto2.calcularValorInventario()); // Mostramos el resultado del metodo calcularValorInventario del segundo objeto
        
    } // Aqui termina el metodo main
} // Aqui termina la clase App
