// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 12

// Problema planteado: Mostrar los primero 100 número primos
#include <iostream>
using namespace std;
int main() 
{
    int cantidad = 0, num = 2;

    while (cantidad < 100) {
        int i;
        for (i = 2; i < num; ++i) {
            if (num % i == 0) {
                break;
            }
        }
        if (i == num) {
            cout << num <<endl;
            cantidad++;
        }
        num++;
    }

    return 0;
}

