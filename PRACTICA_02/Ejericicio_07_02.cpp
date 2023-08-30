// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 6

/* Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. Escribir un programa que escriba la palabra �Iguales� si ambos vectores son iguales y
�Diferentes� si no lo son. Ser�n iguales cuando en la misma posici�n de ambos vectores se tenga el mismo valor para todos los elementos */
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int size = 7;
    const string vector1[size] = {"Ana", "Carlos", "Luis", "Maria", "Pedro", "Sofia", "Juan"};
    const string vector2[size] = {"Ana", "Carlos", "Luis", "Maria", "Pepe", "Sofia", "Juan"};
    bool sonIguales = true;
    for (int i=0; i<size; i++)
    {
        if (vector1[i]!=vector2[i])
        {
            sonIguales=false;
            break; // Si encontramos una diferencia, podemos detener la comparaci�n
        }
    }
    if (sonIguales)
        cout<<"Iguales"<<endl;
    else
        cout<<"Diferentes"<<endl;
	return 0;
}
