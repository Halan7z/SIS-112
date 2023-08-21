// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 13

// Problema planteado: Indique la cantidad de dígitos que tiene un número entero
#include<iostream>
#include<string>
using namespace std;
int main() {
    long long int numero;
    cout << "Ingrese un número entero: ";cin >> numero;

    string numeroStr = to_string(numero);
    int cantidadDigitos = numeroStr.length();

    cout << "El número tiene " << cantidadDigitos << " dígitos." <<endl;

    return 0;
}

