// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 34

// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
#include <iostream>
using namespace std;
int main() 
{
    int numero, suma=0, decena, unidad;
    cout<<"Ingrese el número de términos a generar: ";cin>>numero;
    for (int i=1; i<=numero; i=i+suma) 
	{
        suma=suma+i;
        cout<<endl<<suma;
    }
    cout<<endl;
    return 0;
}

