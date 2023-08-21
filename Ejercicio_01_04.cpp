// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin
#include<iostream>
#define K 273.15
using namespace std;
int main()
{
	float gradosc, gradosk;
	
	cout<<"Ingrese los grados celsius: ";cin>>gradosc;
	
	gradosk=gradosc+K;
	
	cout<<"En kelvin: "<<gradosk;
	return 0;
}
