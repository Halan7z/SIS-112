// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 17

// Problema planteado: Leer un valor en bolivianos y convierta a Euros, D�lares y Libras Esterlinas //
#include <iostream>
using namespace std;
int main()
{
	float bolivianos, euros, dolares, libras;
	cout<<"Ingrese un valor en Bolivianos: ";cin>>bolivianos;
	euros=bolivianos*0.13283;                   //A DIA DE 19/08/2023
	dolares=bolivianos*0.14440;                 //A DIA DE 19/08/2023
	libras=bolivianos*0.113538;                 //A DIA DE 19/08/2023
	cout<<"El valor en euros es: "<<euros<<endl;
	cout<<"El valor en dolares es: "<<dolares<<endl;
	cout<<"El valor en libras esterlinas es: "<<libras<<endl;
	
	return 0;
}
