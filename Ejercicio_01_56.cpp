// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 56

/* Problema planteado: Generar (para un orden n):
Sea n=5:
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese un valor para n: ";cin>>n;
    for (int i=1; i<=n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            cout<<(i+j)%2<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
