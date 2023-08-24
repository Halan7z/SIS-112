// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 54

/* Problema planteado:  Hallar la raíz cuadrada de un número por aproximaciones, utilizar:
http://es.wikipedia.org/wiki/C%C3%A1lculo_de_la_ra%C3%ADz_cuadrada
(Algoritmo Babilónico)  */
#include <iostream>
#include <cmath>
using namespace std;
double calcularRaizCuadrada(double numero, double tolerancia) 
{
    double aproximacion=numero/2.0; // Asumimos una aproximación inicial
    while (fabs(aproximacion*aproximacion-numero)>tolerancia) 
	{
        aproximacion=0.5*(aproximacion+numero/aproximacion);
    }
    return aproximacion;
}
int main() 
{
    double numero;
    cout<<"Ingrese un número para calcular su raíz cuadrada: ";cin>>numero;
    if (numero<0) 
	{
        cout<<"No se puede calcular la raíz cuadrada de un número negativo."<<endl;
    } 
	else 
	{
        double tolerancia=1e-6; // Tolerancia para la aproximación
        double raiz=calcularRaizCuadrada(numero, tolerancia);
        cout<<"La raíz cuadrada de "<<numero<<" es aproximadamente: "<<raiz<<endl;
    }
    return 0;
}
 
