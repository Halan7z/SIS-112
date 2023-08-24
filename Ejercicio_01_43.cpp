// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 43

/* Problema planteado:  Obtener el promedio de números enteros positivos introducidos por teclado, el algoritmo se detiene cuando se lea un número negativo o cero */
#include <iostream>
using namespace std;
int main()
{
	int numero, sumatoria;
	float i=0;
	cout<<"Ingrese un numero entero: ";cin>>numero;
	sumatoria=sumatoria+numero;
	while (numero>0)
	{
		if (numero<0)
		{
			numero=numero*(-1);
			sumatoria=(sumatoria-numero);
			break;
		}
		cout<<"Ingrese un numero entero: ";cin>>numero;
		sumatoria=sumatoria+numero;
		i++;
	}
	if (sumatoria>0)
		cout<<"El promedio de los numeros es: "<<sumatoria/i;
	else
		cout<<"El primer numero que ingreso fue negativo o cero";
	return 0;
}
