// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 31

/* Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es */
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
