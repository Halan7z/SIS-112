// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 15

// Problema planteado: Escriba la sucesi�n de Fibonacci. //
#include <iostream>
using namespace std;
int main()
{
	long long int numero=0, sucesion=1, anterior=0;
	while (sucesion>0)
	{
		cout<<sucesion<<endl;
        anterior=sucesion;
        sucesion=sucesion + numero;
        numero=anterior;
	}
	return 0;
}
