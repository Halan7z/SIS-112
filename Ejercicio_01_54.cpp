// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 54

/* Problema planteado:  Hallar la ra�z cuadrada de un n�mero por aproximaciones, utilizar:
http://es.wikipedia.org/wiki/C%C3%A1lculo_de_la_ra%C3%ADz_cuadrada
(Algoritmo Babil�nico)  */
#include <iostream>
#include <cmath>
using namespace std;
double calcularRaizCuadrada(double numero, double tolerancia) 
{
    double aproximacion=numero/2.0; // Asumimos una aproximaci�n inicial
    while (fabs(aproximacion*aproximacion-numero)>tolerancia) 
	{
        aproximacion=0.5*(aproximacion+numero/aproximacion);
    }
    return aproximacion;
}
int main() 
{
    double numero;
    cout<<"Ingrese un n�mero para calcular su ra�z cuadrada: ";cin>>numero;
    if (numero<0) 
	{
        cout<<"No se puede calcular la ra�z cuadrada de un n�mero negativo."<<endl;
    } 
	else 
	{
        double tolerancia=1e-6; // Tolerancia para la aproximaci�n
        double raiz=calcularRaizCuadrada(numero, tolerancia);
        cout<<"La ra�z cuadrada de "<<numero<<" es aproximadamente: "<<raiz<<endl;
    }
    return 0;
}
 
