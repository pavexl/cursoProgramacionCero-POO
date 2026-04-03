/*
Descripcion:
    Clase padre que representa una hormiga en general
    Aqui colocamos los atributos y metodos comunes
*/

public class Hormiga {

    //ATRIBUTOS privados para mantener encapsulamiento
    private int id;
    private String tipo;
    private String estado;

    //CONSTRUCTOR
    public Hormiga(int id, String tipo) {

        this.id = id;
        this.tipo = tipo;
        this.estado = "VIVA";

    }

    //GETTERS
    public int getId() {
        return id;
    }

    public String getTipo() {
        return tipo;
    }

    public String getEstado() {
        return estado;
    }

    //SETTERS para cambiar el estado
    public void setEstado(String estado) {
        this.estado = estado;
    }

    //METODOS

    //Metodo que luego sera sobreescrito
    public void mostrarAccion() {
        System.out.println("La hormiga realiza una accion general.");
    }

    //Metodo para mostrar informacion
    public void mostrarInfo() {
        System.out.println("ID: " + id + " | Tipo: " + tipo + " | Estado: " + estado);
    }
    
}
