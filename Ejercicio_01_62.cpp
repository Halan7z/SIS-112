// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 62

/* Problema planteado: En una guarder�a hay 25 ni�os de 1, 2 y 3 a�os. Los ni�os de 1 a�o consumen 6 pa�ales
al d�a, los ni�os de 2 a�os consumen 3 pa�ales diarios y los ni�os de 3 a�os consumen
2 pa�ales diarios. Se desea conocer el consumo total de pa�ales diarios.
Datos: edad1
 edad2
 . . . . .
 edad25 */
#include <iostream>
using namespace std;
int main()
{
	int edad, cantidad=0;
	for (int i=1; i<=25; i++)
	{
		cout<<"Ingrese la edad del ni�o "<<i<<": "; cin>>edad;
		if (edad==3)
			cantidad=cantidad+2;
		if (edad==2)
			cantidad=cantidad+3;
		if (edad==1)
			cantidad=cantidad+6;
		if (edad>=4 || edad<=0)
		{
			cout<<"Edad invalida, nuevamente ";
			i--;
		}
	}
	cout<<"El consumo total de pa�ales de la guarderia es de: "<<cantidad;
	return 0;
}
