// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 32

/* Problema planteado: Leer un número entero y mostrarlo con las cifras al revés */
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
