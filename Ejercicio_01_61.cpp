// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 61

/* Problema planteado: Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el Máximo Común Divisor y el Mínimo Común Múltiplo de m y n. El Algoritmo de Euclides
establece que, si m>=n, MCD(m,n) = MCD(n, m mod n) */
#include <iostream>
using namespace std;
int main() 
{
    int m, n, temporal, r;
    cout<<"Ingrese m: ";cin>>m;
    cout<<"Ingrese n: ";cin>>n;
    if (m<n) 
    {
        // Intercambiar m y n
        temporal=m;
        m=n;
        n=temporal;
    }
    int inicialM=m, inicialN=n;
        //Algoritmo de Euclides
    while (n!=0) 
    {
        r=m%n;
        m=n;
        n=r;
    }
    int MCD=m;
    int mcm=(inicialM*inicialN)/MCD;
    cout<<"El MCD es: "<<MCD<<endl;
    cout<<"El mcm es: "<<mcm<<endl;
    return 0;
}

