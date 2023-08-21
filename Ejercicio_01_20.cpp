// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 20

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor //
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
