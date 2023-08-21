// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 28

/* Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas */
#include <iostream>
using namespace std;
int main()
{
	int multiplicando, multiplicador, i=0, resultado=0;
	cout<<"Ingrese el valor a de la multiplicacion: ";cin>>multiplicando;
	cout<<"Ingrese el valor b de la multiplicacion: ";cin>>multiplicador;
	while (i<multiplicador)
	{
		resultado=resultado+multiplicando;
		i++;
	}
	cout<<"El resultado es: "<<resultado;
	return 0;
}
