// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 62

/* Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales
al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
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
		cout<<"Ingrese la edad del niño "<<i<<": "; cin>>edad;
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
	cout<<"El consumo total de pañales de la guarderia es de: "<<cantidad;
	return 0;
}
