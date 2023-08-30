// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 8

/* Problema planteado: - Se tiene el arreglo Ventas: 0 1 2 10 11 Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
contiene los nombres de los meses:
Meses:
0 1 2 10 11
Escriba un programa que obtenga:
• ¿En qué mes(es) se dieron las ventas máximas de la empresa?
• ¿A cuánto ascendieron las ventas máximas?
• ¿Cuál fue el total de las ventas?
Las ventas deben ser ingresadas por teclado.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int size = 12;
    const string meses[size] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};
    int ventas[size];
    int maxVentas = 0, totalVentas = 0;
    string mesesMaxVentas;
    // Ingreso de las ventas mensuales
    for (int i=0; i<size; i++)
    {
        cout << "Ingrese las ventas de "<<meses[i]<<": ";
        cin >> ventas[i];
        totalVentas+=ventas[i];
        if (ventas[i]>maxVentas)
        {
            maxVentas = ventas[i];
            mesesMaxVentas = meses[i];
        }
        else if (ventas[i] == maxVentas)
            mesesMaxVentas += ", " + meses[i];
    }
    cout << endl;
    cout << "Mes(es) con ventas maximas: " << mesesMaxVentas << endl;
    cout << "Ventas maximas: " << maxVentas << endl;
    cout << "Total de ventas: " << totalVentas << endl;

	return 0;
}
