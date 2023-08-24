// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 39

/* Problema planteado:  Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que si el primer número es mayor al segundo, genere una serie descendente, caso
contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad. */
#include <iostream>
using namespace std;
int main()
{
	int numeroA, numeroB, i;
	cout<<"Ingrese un numero (a): ";cin>>numeroA;
	cout<<"Ingrese otro numero (b): ";cin>>numeroB;
	if (numeroA==numeroB)
		cout<<"Ingrese dos numeros distintos";
	if (numeroA>numeroB)
	{
		for (i=numeroA; i>=numeroB; i--)
		{
			cout<<i<<" ";			
		}
	}
	if (numeroB>numeroA)
	{
		for (i=numeroA; i<=numeroB; i++)
		{
			cout<<i<<" ";			
		}
	}
	return 0;
}
