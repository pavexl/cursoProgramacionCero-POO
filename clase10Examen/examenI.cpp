/*
Nombre: Pavel Ganchala
Curso: Bootcamp Programación Cero a POO
Clase: 10 - Examen 1 (C++)
Fecha: 18/03/2026
Tema:
Sistema de registro y análisis de notas de estudiantes

Entrada:
- Cantidad de estudiantes
- Nombres de estudiantes
- Nota de cada estudiante

Proceso:
- Validar datos ingresados
- Almacenar información en arreglos
- Calcular promedio general
- Buscar una nota mayor y una nota menor
- Mostrar reporte de aprobados y reprobados
- Permitir consultar un estudiante por nombre

Salida:
- Listado de estudiantes y notas
- Promedio general
- Nota mayor y nota menor
- Cantidad de aprobados y reprobados
- Resultado de búsqueda por nombre
*/

#include <iostream>
using namespace std;

// FUNCIONES

void registrarEstudianteyNota(int &n, string nombres[], float notas[]){
    do{
        cout << "Cantidad de estudiantes (1-20): ";
        cin >> n;
    }while(n < 1 ||n > 20);

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: ";
        cin >> nombres[i];

        do
        {
            cout << "Nota (0-20): ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 20);
        
    }
    
}

void mostrarListado(int n, string nombres[], float notas[]){
    if (n==0)
    {
        cout << "No existen estudiantes ingresados.";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". " << nombres[i] << " - " <<notas[i] <<endl;
    }
    
    
}

float promedio(int n, float notas[]){
    float suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += notas [i];
    }
    
    return suma / n;
}

void mayorMenor(int n, string nombres[], float notas[]){
    if(n==0){
        cout << "No existen estudiantes registrados.";
        return;
    }

    int mayor = 0, menor = 0;
    for(int i = 1; i < n; i++){
        if(notas[i] > notas[mayor]) mayor = i;
        if(notas[i] < notas[menor]) menor = i;
    }

    cout << "Nota mayor: " << nombres[mayor] << " - " << notas[mayor] << endl;
    cout << "Nota menor: " << nombres[menor] << " - " << notas[menor] <<endl;
}

void contar(int n, float notas[]){
    int aprobados = 0, reprobados = 0;

    for(int i = 0; i < n; i++){
        if (notas[i] >= 14)
        {
            aprobados++;
        }else reprobados ++;
        
    }

    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << reprobados << endl;
}