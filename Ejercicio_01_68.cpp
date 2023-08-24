// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 68

/* Problema planteado:   Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y determine cuántos de estos elementos son números primos.   */
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
    srand(time(0));  // Inicializar la semilla del generador de números aleatorios

    const int cantidadNumeros = 50;
    int numerosPrimos = 0;

    for (int i = 0; i < cantidadNumeros; ++i) 
    {
        int numeroAleatorio = generarNumeroAleatorio(1, 99);  // Generar número aleatorio en el rango (1-99)
        
        if (esPrimo(numeroAleatorio)) {
            numerosPrimos++;
        }

        cout << "Número " << i + 1 << ": " << numeroAleatorio << endl;
    }

    cout << "Cantidad de números primos encontrados: " << numerosPrimos << endl;

    return 0;

}
