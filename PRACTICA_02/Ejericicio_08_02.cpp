// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 8

/* Problema planteado: - Se tiene el arreglo Ventas: 0 1 2 10 11 Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
contiene los nombres de los meses:
Meses:
0 1 2 10 11
Escriba un programa que obtenga:
� �En qu� mes(es) se dieron las ventas m�ximas de la empresa?
� �A cu�nto ascendieron las ventas m�ximas?
� �Cu�l fue el total de las ventas?
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
