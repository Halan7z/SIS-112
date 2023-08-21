// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 5

/* Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 ) */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1, x2, y1, y2, calculo;
	cout<<"Ingrese X EN P1: ";cin>>x1;
	cout<<"Ingrese Y EN P1: ";cin>>y1;
	cout<<"Ingrese X EN P2: ";cin>>x2;
	cout<<"Ingrese Y EN P2: ";cin>>y2;
	
	calculo=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	
	cout<<"La distancia entre ambos puntos es: "<<calculo;
	return 0;
}
