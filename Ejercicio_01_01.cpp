// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 1

// Problema planteado: �rea de un tri�ngulo
#include<iostream>

using namespace std;

int main()
{
	float base, altura, area=0;
	
	cout<<"Ingrese la base del triangulo: ";cin>>base;
	cout<<"Ingrese la altura del triangulo: ";cin>>altura;
	
	area= (base*altura)/2;
	
	cout<<"El area del triangulo es: "<<area;
	return 0;
}
