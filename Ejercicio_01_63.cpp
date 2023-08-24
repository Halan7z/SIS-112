// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 63

// Problema planteado: Leer un valor num�rico y convertirlo a un n�mero romano (1-9999) //
#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n, j;
	vector<string> numerosRomanos = {"X^", "IX^", "V^", "MMMM", "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
	vector<int> numeros = {10000, 9000, 5000, 4000, 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string romanos = "";
	cout<<"Ingrese el numero a convertir en romano: ";cin>>n;
	for (int i=0; i<17; i++)
	{
		j=n/numeros[i];
		for (int x=1; x<=j; x++)
		{
			romanos=romanos+numerosRomanos[i];
		}
		n=n-numeros[i]*j;
	}
	cout<<"El numero que ingreso convertido en romanos es: "<<romanos;
	return 0;
}
