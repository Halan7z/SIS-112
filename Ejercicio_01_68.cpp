// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 68

/* Problema planteado:   Escribir un algoritmo que permita generar 50 n�meros al azar en el rango (1-99) y determine cu�ntos de estos elementos son n�meros primos.   */
#include <iostream>
#include <ctime>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int generarNumeroAleatorio(int minimo, int maximo) 
{
    return minimo + rand() % (maximo - minimo + 1);
}

int main() {
    srand(time(0));  // Inicializar la semilla del generador de n�meros aleatorios

    const int cantidadNumeros = 50;
    int numerosPrimos = 0;

    for (int i = 0; i < cantidadNumeros; ++i) 
    {
        int numeroAleatorio = generarNumeroAleatorio(1, 99);  // Generar n�mero aleatorio en el rango (1-99)
        
        if (esPrimo(numeroAleatorio)) {
            numerosPrimos++;
        }

        cout << "N�mero " << i + 1 << ": " << numeroAleatorio << endl;
    }

    cout << "Cantidad de n�meros primos encontrados: " << numerosPrimos << endl;

    return 0;

}
