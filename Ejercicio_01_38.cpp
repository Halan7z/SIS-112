// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 21/08/2023

// Fecha modificaci�n: 21/08/2023

// N�mero de ejericio: 38

/* Problema planteado:  En el a�o 2009 el pa�s A tiene una poblaci�n de 25 millones y el pa�s B de 19.9 millones. Las tasas de crecimiento de la poblaci�n son de 2% y 3% respectivamente.
Desarrollar un programa para saber en qu� a�o la poblaci�n del pa�s B supera a la de A. */
#include <iostream>
using namespace std;
int main()
{
	float a=25, b=19.9, crecimientoA, crecimientoB, year=2009;
	while (b<=a)
	{
		crecimientoA=a*0.02;
		crecimientoB=b*0.03;
		a=a+crecimientoA;
		b=b+crecimientoB;
		year++;
	}
	cout<<"El a�o en el que la poblacion B sera mayor a la poblacion B es "<<year;
	return 0;
}
