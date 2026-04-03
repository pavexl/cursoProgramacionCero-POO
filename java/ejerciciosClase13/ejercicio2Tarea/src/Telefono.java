public class Telefono {

    private String marca;
    private String modelo;
    private double precio;

    // CONSTRUCTOR
    public Telefono(String marca, String modelo, double precio) {
        this.marca = marca;
        this.modelo = modelo;
        
        if (precio >= 0) {
            this.precio = precio;
        } else {
            this.precio = 0;
            System.out.println("Precio invalido, se asigno 0.");
        }
    }

    

}
