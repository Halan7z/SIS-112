// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 1

// Problema planteado: Área de un triángulo
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
