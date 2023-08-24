// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 57

/* Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double raiz;
    cout<<"Ingrese el valor de n: ";cin>>n;
    cout<<"Cuadrados perfectos en el rango de 1 a "<<n<<":"<<endl;
    for (int i=1; i<=n; i++) 
    {
        raiz=sqrt(i);
        if (raiz==int(raiz)) 
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
