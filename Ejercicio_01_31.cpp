// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 31

/* Problema planteado: Leer dos n�meros y verificar si uno es m�ltiplo del otro o no lo es */
#include <iostream>
using namespace std;
int main()
{
	int numeroA, numeroB, i, multiplo=0;
	cout<<"Ingrese un numero (a): ";cin>>numeroA;
	cout<<"Ingrese otro numero (b): ";cin>>numeroB;
	if (numeroA>numeroB)
	{
		for (i=1; i<=numeroA;i++)
		{
			multiplo=numeroB*i;
			if (multiplo==numeroA)
			{
				cout<<"El numero (a) es multiplo del (b)";
				break;
			}

		}
		if (multiplo!=numeroA)
		{
			cout<<"No son multiplos entre si";
		}
	}
	if (numeroA==numeroB)
	{
		cout<<"Los numeros son iguales, por lo tanto son multiplos entre si";
	}
	else
	{
		for (i=1; i<=numeroB;i++)
		{
			multiplo=numeroA*i;
			if (multiplo==numeroB)
			{
				cout<<"El numero (b) es multiplo del numero (a)";
				break;
			}

		}
		if (multiplo!=numeroB)
		{
			cout<<"No son multiplos entre si";
		}
	}
	return 0;
}
