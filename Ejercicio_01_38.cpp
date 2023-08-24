// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 38

/* Problema planteado:  En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9 millones. Las tasas de crecimiento de la población son de 2% y 3% respectivamente.
Desarrollar un programa para saber en qué año la población del país B supera a la de A. */
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
	cout<<"El año en el que la poblacion B sera mayor a la poblacion B es "<<year;
	return 0;
}
