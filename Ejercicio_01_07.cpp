// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 7

// Problema planteado: N�mero amigo
#include<iostream>
using namespace std;
int main()
{
	int numeroA, numeroB, divisoresA=0, divisoresB=0;
	cout<<"Ingrese un numero: ";cin>>numeroA;
	cout<<"Ingrese otro numero: ";cin>>numeroB;
	for (int i=1; i<=numeroA; i++)
	{
		if (numeroA%i==0)
			divisoresA=divisoresA+i;		
	}
	for (int i=1; i<=numeroB; i++)
	{
		if (numeroB%i==0)
			divisoresB=divisoresB+i;		
	}
	if (divisoresA==divisoresB)
		cout<<"El numero "<<numeroA<<" y "<<"el numero "<<numeroB<<" son numeros AMIGOS";
	else
		cout<<"El numero "<<numeroA<<" y "<<"el numero "<<numeroB<<" NO son numeros AMIGOS";
	return 0;
}
