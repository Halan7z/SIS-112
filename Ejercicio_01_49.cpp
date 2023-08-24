// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 49

/* Problema planteado:  Escribir un programa que muestre en pantalla, con los encabezados correspondientes, el capital (Cn) y los intereses ganados por un capital C0 depositado a un inter�s
compuesto I durante N a�os. C0, I y N se deben leer por teclado. La f�rmula a emplear es:
Cn = C0(1+I)n */
#include <iostream>
using namespace std;
int main()
{
	int c0, I, n;
	cout<<"Ingrese los intereses ganados por un capital (C0): ";cin>>c0;
	cout<<"Ingrese el interes compuesto (I): ";cin>>I;
	cout<<"Ingrese los a�os (n): ";cin>>n;
	cout<<endl<<"Cn = C0(1+I)n"<<endl;
	cout<<"Cn = "<<c0*(1+I)*n;
	return 0;
}
