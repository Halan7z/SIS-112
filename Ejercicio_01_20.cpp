// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 20

// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor //
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Ingrese un numero entero: ";cin>>a;
	cout<<"Ingrese un numero entero: ";cin>>b;
	cout<<"Ingrese un numero entero: ";cin>>c;
	
	if (a==b and a==c)
	{
		cout<<"Los numeros ingresados son iguales"<<endl;
	}
	else
	{
		if (a<b && a<c)
		{
			cout<<"El numero menor es: "<<a<<endl;
		}
		if (b<c && b<a)
		{
			cout<<"El numero menor es: "<<b<<endl;
		}
		if (c<a && c<b)
		{
			cout<<"\nEl numero menor es: "<<c<<endl;
		}	
	}
	return 0;
}
