// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 58

/* Problema planteado: Generar:
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321  */
#include <iostream>
#define n 9
using namespace std;
int main() 
{
    for (int i=1; i<=n; i++) 
        {
        // Parte ascendente
        for (int j=1; j<=i; j++) 
        {
            cout<<j;
        }
        // Parte descendente
        for (int j=i-1; j>=1; j--) {
            cout<<j;
        }
        cout<<"\n";
        }
    return 0;
}
