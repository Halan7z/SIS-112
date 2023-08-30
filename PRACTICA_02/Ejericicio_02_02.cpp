// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Cmapos

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, determine el porcentaje de números pares positivos e impares negativos.
#include <iostream>
using namespace std;
int main() 
{
    const int size = 10;
    int arreglo[size] = {-1, 6, -7, 10, -3, 8, 4, -9, 6, -1};
    int paresPositivos = 0;
    int imparesNegativos = 0;

    for (int i = 0; i < size; ++i) 
	{
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) 
            paresPositivos++;
        else if (arreglo[i] % 2 != 0 && arreglo[i] < 0)
            imparesNegativos++;
    }
    double porcentajeParesPositivos=(static_cast<double>(paresPositivos)/size)*100; // static_cast permite conversiones entre diferentes tipos de datos
    double porcentajeImparesNegativos=(static_cast<double>(imparesNegativos)/size)*100;
    cout << "Porcentaje de numeros pares positivos: " << porcentajeParesPositivos << "%" << endl;
    cout << "Porcentaje de numeros impares negativos: " << porcentajeImparesNegativos << "%" << endl;
    return 0;
}

