// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 4

// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin
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
