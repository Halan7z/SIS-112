// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 8

/* Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
hora se cobra 5 Bs adicional por hora.
Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe
pagar. */
#include <iostream>
#define H 7
using namespace std;
int main()
{
	float horas, pago;
	
	cout<<"Ingrese la cantidad de horas que uso el estacionamiento: ";cin>>horas;
	
	if (horas==1)
	{
		cout<<"Debe pagar: "<<H;
	}
	else 
	{
		pago=((horas-1)*5)+H;
		cout<<"Debe pagar: "<<pago;
	}
	return 0;
}
