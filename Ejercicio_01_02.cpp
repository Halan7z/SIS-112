// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 2

// Problema planteado: Volumen de una esfera
#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;

int main()
{
	float radio, volumen, potencia;
	cout<<"Ingrese el radio de la esfera: ";cin>>radio;
	
	potencia=pow(radio,3);
	volumen=((potencia*4)/3)*PI;
	
	cout<<"El volumen de la esfera es: "<<volumen;
	return 0;
}
