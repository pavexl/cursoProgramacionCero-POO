public class Producto {

    // Atributos para guardar el nombre, precio y stock del producto
    String nombre;
    double precio;
    int stock;


    public Producto(String nombre, double precio, int stock) { // Constructor para crear el objeto con valores iniciales

        this.nombre = nombre; // Guardamos en el atributo nombre el valor recibido por el constructor
        this.precio = precio; // Guardamos en el atributo precio el valor recibido por el constructor
        this.stock = stock; // Guardamos en el atributo stock el valor recibido por el constructor

    }

    // METODOS

    public void mostrarInfo() { // Metodo que muestra la informacion del producto en consola

        System.out.println("Nombre: " + nombre); // Mostramos el nombre del producto
        System.out.println("Precio: " + precio); // Mostramos el precio del producto   
        System.out.println("Stock: " + stock); // Mostramos el stock del producto

    }

    public double calcularValorInventario() { //Metodo que calcula el valor total del inventario

        return precio * stock; // Retornamos el valor total del inventario multiplicando el precio por el stock

    }


} // Aqui termina la clase producto
