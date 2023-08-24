// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 33

// Problema planteado:  Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.  
#include<iostream>
using namespace std;
int main()
{
	int diasA, diasB, mesesA, mesesB, anioA, anioB;
	int diasTotalesA, diasTotalesB, diferencia;
	cout<<"Ingrese la fecha (dd mm yyyy): "; cin>>diasA>>mesesA>>anioA;
	cout<<"Ingrese la fecha (dd mm yyyy): "; cin>>diasB>>mesesB>>anioB;
	// Calcular el número de días desde el inicio del primer año
    diasTotalesA=diasA+(mesesA-1)*30+(anioA-1)*360;
    // Calcular el número de días desde el inicio del segundo año
    diasTotalesB=diasB+(mesesB-1)*30+(anioB-1)*360;
    // Calcular la diferencia en días
    diferencia=diasTotalesB-diasTotalesA;
    cout<<"La diferencia entre las dos fechas es de: "<<diferencia<<" dias"<<endl;
	return 0;
}
