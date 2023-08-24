// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 50

/* Problema planteado:  Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter. La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado. */
#include <iostream>
using namespace std;
int main()
{
	float numeroA, numeroB;
	char letra;
	cout<<"Ingrese un numero (a): ";cin>>numeroA;
	cout<<"Ingrese un numero (b): ";cin>>numeroB;
	cout<<"Ingrese S para sumar, R para restar, M para multiplicar y D para dividir: ";cin>>letra;
	
	if (letra=='s' || letra=='S')
	{
		cout<<endl<<"La suma de los numeros (a+b) es: "<<numeroA+numeroB;
	}
	if (letra=='r' || letra=='R')
	{
		cout<<endl<<"La resta de los numeros (a-b) es: "<<numeroA-numeroB;
		cout<<endl<<"La resta de los numeros (b-a) es: "<<numeroB-numeroA;
	}
	if (letra=='m' || letra=='M')
	{
		cout<<endl<<"La multiplicacion de los numeros (a*b) es: "<<numeroA*numeroB;
	}
	if (letra=='d' || letra=='D')
	{
		cout<<endl<<"La division de los numeros (a/b) es: "<<numeroA/numeroB;
		cout<<endl<<"La division de los numeros (b/a) es: "<<numeroB/numeroA;
	}
	return 0;
}
