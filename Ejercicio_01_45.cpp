// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 45

/* Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros n�meros compuestos. */
#include <iostream>
#include <cmath>
using namespace std;
bool esCompuesto(int num) 
{
    if (num <= 1) 
        return false;
    for (int i = 2; i <= sqrt(num); i++) 
	{
        if (num % i == 0)
            return true;
    }
    return false;
}
int main() 
{
    int cantidadNumerosCompuestos=0;
    int sumaCuadrados=0;
    int num=4; // Empezamos en 4 porque 0, 1, 2, y 3 no son compuestos
    while (cantidadNumerosCompuestos < 100) 
	{
        if (esCompuesto(num)) 
		{
            sumaCuadrados += num * num;
            cantidadNumerosCompuestos++;
        }
        num++;
    }
    cout<<"La suma de los cuadrados de los primeros 100 numeros compuestos es: "<<sumaCuadrados<<endl;
    return 0;
}
 
