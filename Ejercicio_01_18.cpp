// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 18

// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada //
#include <iostream>
using namespace std;
int main()
{
	float base, altura, area, volumen;
	cout<<"Ingrese la base de la piramide: ";cin>>base;
	cout<<"Ingrese la altura de la piramide: ";cin>>altura;
	area=base*base;
	volumen=(area*altura)/3;
	cout<<"El volumen de la piramide es de: "<<volumen<<endl;
	return 0;
}
