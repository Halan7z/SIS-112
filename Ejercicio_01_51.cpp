// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 51

/* Problema planteado:   Dados dos n�meros enteros, realizar el algoritmo que calcule el cociente y el resto. El m�todo para obtener el cociente y el resto es por restas sucesivas  */
#include <iostream>
using namespace std;
int main()
{
	int dividendo, divisor, cociente;
	cout<<"Ingrese el dividendo: ";cin>>dividendo;
	cout<<"Ingrese el divisor: ";cin>>divisor;
	if (divisor==1)
	{
		cout<<endl<<"El cociente es: "<<dividendo;
		cout<<endl<<"El resto es: 0";
	}
	if (divisor!=1)
	{
		while (dividendo>divisor)
		{
			dividendo=dividendo-divisor;
			cociente++;
		}
		cout<<endl<<"El cociente es: "<<cociente;
		cout<<endl<<"El resto es: "<<dividendo;
	}
	
	return 0;
}
