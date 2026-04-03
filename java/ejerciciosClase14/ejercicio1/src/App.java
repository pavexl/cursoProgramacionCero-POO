/*
Titulo: Ejercicio 1 - Encapsulamiento con validacion
Autor: Pavel Ganchala

Enunciado:
    Crear una clase llamada CuentaBancaria con los atributos privados titular y saldo.
    La clase debe permitir consultar y modificar sus datos de forma controlada usando getters, setters y metodos de validacion
*/



public class App {
    public static void main(String[] args) {
        CuentaBancaria cuenta1 = new CuentaBancaria("Pavel", 100.0); // Creamos una cuenta bancaria con titular y saldo inicial
        
        System.out.println("=== DATOS INICIALES ===");
        System.out.println("Titular: " + cuenta1.getTitular()); // Consultamos el titular usando el getter
        System.out.println("Saldo: " + cuenta1.getSaldo()); // Consultamos el saldo usando el getter

        System.out.println(); // Imprimir una linea en blanco o salto de linea

        cuenta1.depositar(50.0); // Depositamos dinero en la cuenta usando el metodo depositar
        cuenta1.retirar(30.0); // Retiramos dinero de la cuenta usando el metodo retirar
        cuenta1.retirar(200.0); // Intentamos retirar un monto mayor al saldo para probar la validacion
        cuenta1.depositar(-10.0); // Intentamos depositar un monto negativo para probar la validacion

        System.out.println(); // Imprimir una linea en blanco o salto de linea

        System.out.println("=== DATOS MODIFICADOS ==="); // Mostramos un titulo
        System.out.println("Titular: " + cuenta1.getTitular()); // Consultamos el titular final
        System.out.println("Saldo: " + cuenta1.getSaldo()); // Consultamos el saldo final    

    }
}
