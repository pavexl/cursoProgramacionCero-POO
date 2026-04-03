public class CuentaBancaria {

    //Atributos
    private String titular; //Atributo privado para guardar el nombre del titular
    private double saldo; //Atributo privado para guardar el saldo disponible

    //Constructor para inicializar los atributos
    public CuentaBancaria(String titular, double saldoInicial) {

        this.titular = titular; // Guardamos el nombre del titular recibido en el constructor
        if (saldoInicial >= 0) { // Verificamos si saldo inicial es valido
            this.saldo = saldoInicial; // Si es valido, guardamos ese saldo en el atributo
        } else {

            this.saldo = 0; // Colocamos el saldo en cero para evitar valores negativos

        }

    }

    public String getTitular() { // Getter para consultar el nombre del titular
        return titular; // Retornamos el valor del atributo titular
    }

    public double getSaldo() { // Getter para consultar el saldo
        return saldo; // Retornamos el valor del atributo saldo

    }

    public void setTitular(String titular) { //Setter para modificar el nombre del titular con validacion
        if(titular != null && !titular.isEmpty()) { // Verificamos que el nuevo titular no sea nulo ni vacio
            this.titular = titular; // Si es valido, actualizamos el nombre del titular
        } else {

            System.out.println("Erro: el titular no puede estar vacio o ser nulo."); // Si no es valido, mostramos un mensaje de error

        }

    }

    //Metodos

    public void depositar(double monto) { // Metodo para depositar dinero en la cuenta con validacion

        if (monto > 0) {
            saldo = saldo + monto; // Sumamos el monto al saldo actual
            System.out.println("Deposito realizado correctamente."); // Mostramos un mensaje de confirmacion 
            
        } else {
            System.out.println("Error: el monto a depositar debe ser mayor que cero."); // Mostramos un mensaje de error si el monto es inválido
        }

    }

    public void retirar(double monto) { //Metodo para retirar el dinero de la cuenta

        if (monto > 0 && monto <= saldo) { //Verificamos que el monto a retirar sea mayor que cero y no exceda el saldo disponible
            saldo = saldo - monto; // Restamos el monto al saldo actual
            System.out.println("Retiro realizado correctamente.");

        } else {
            System.out.println("Error: el monto a retirar debe ser mayor que cero y no puede exceder el saldo disponible."); // Mostramos un mensaje de error si el monto es inválido o excede el saldo 

        }

    }

}
