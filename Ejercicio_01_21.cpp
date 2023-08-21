// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 21

/* Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que 
el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2). */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float numero, a, b, cuadrado, inverso, mitad;
	cout<<"Ingrese un numero: ";cin>>numero;
	cout<<"Ingrese el intervalo menor (a): ";cin>>a;
	cout<<"Ingrese el intervalo mayor (b): ";cin>>b;
	if (numero>a && numero<b)
	{
		cuadrado=numero*numero;
		cout<<"El numero esta dentro del intervalo, su cuadrado es: "<<cuadrado<<endl;
	}
	if (numero<a)
	{
		inverso=1/numero;
		cout<<"El numero es menor que el limite inferior, su valor inverso es: "<<inverso<<endl;
	}	
	if (numero>b)
	{
		mitad=numero/2;
		cout<<"El numero es mayor que el limite superior, su mitad es: "<<mitad<<endl;
	}	
	return 0;
}
