// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 33

// Problema planteado:  Leer dos fechas y mostrar el n�mero de d�as que hay de diferencia. Suponiendo todos los meses de 30 d�as.  
#include<iostream>
using namespace std;
int main()
{
	int diasA, diasB, mesesA, mesesB, anioA, anioB;
	int diasTotalesA, diasTotalesB, diferencia;
	cout<<"Ingrese la fecha (dd mm yyyy): "; cin>>diasA>>mesesA>>anioA;
	cout<<"Ingrese la fecha (dd mm yyyy): "; cin>>diasB>>mesesB>>anioB;
	// Calcular el n�mero de d�as desde el inicio del primer a�o
    diasTotalesA=diasA+(mesesA-1)*30+(anioA-1)*360;
    // Calcular el n�mero de d�as desde el inicio del segundo a�o
    diasTotalesB=diasB+(mesesB-1)*30+(anioB-1)*360;
    // Calcular la diferencia en d�as
    diferencia=diasTotalesB-diasTotalesA;
    cout<<"La diferencia entre las dos fechas es de: "<<diferencia<<" dias"<<endl;
	return 0;
}
