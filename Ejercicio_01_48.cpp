// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 48

/* Problema planteado:  Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango. */
#include <iostream>
using namespace std;
int main()
{
	int a, b, cantidad=0;
	cout<<"Ingrese un numero entero (a): ";cin>>a;
	cout<<"Ingrese un numero entero (b): ";cin>>b;
	if (a>b)
	{
		for (int i=b; i<=a; i++)
		{
			if (i%2==0)
				cantidad++;
		}
		cout<<"Hay "<<cantidad<<" numeros pares en el rango de (b) - (a)";
	}
	if (b>a)
	{
		for (int i=a; i<=b; i++)
		{
			if (i%2==0)
				cantidad++;
		}
		cout<<"Hay "<<cantidad<<" numeros pares en el rango de (a) - (b)";

	}
	if (b==a)
		cout<<"Los numeros ingresados son iguales, ingrese otros valores";
	return 0;
}
