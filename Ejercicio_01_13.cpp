// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 13

// Problema planteado: Indique la cantidad de d�gitos que tiene un n�mero entero
#include<iostream>
#include<string>
using namespace std;
int main() {
    long long int numero;
    cout << "Ingrese un n�mero entero: ";cin >> numero;

    string numeroStr = to_string(numero);
    int cantidadDigitos = numeroStr.length();

    cout << "El n�mero tiene " << cantidadDigitos << " d�gitos." <<endl;

    return 0;
}

