// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 34

// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n t�rminos
#include <iostream>
using namespace std;
int main() 
{
    int numero, suma=0, decena, unidad;
    cout<<"Ingrese el n�mero de t�rminos a generar: ";cin>>numero;
    for (int i=1; i<=numero; i=i+suma) 
	{
        suma=suma+i;
        cout<<endl<<suma;
    }
    cout<<endl;
    return 0;
}

