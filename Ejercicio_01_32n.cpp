// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 32

/* Problema planteado: Leer un n�mero entero y mostrarlo con las cifras al rev�s */
#include <iostream>
using namespace std;
int main()
{
	int numero, digito;
	cout<<"Ingrese un numero entero: ";cin>>numero;
	while (numero>1)
	{
		numero=numero%10;
		cout<<endl<<numero<<endl;
	}
	return 0;
}
