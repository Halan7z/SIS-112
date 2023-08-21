// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares. //
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r, theta, x, y;
    cout<<"Ingrese la distancia r: ";
    cin>>r;
    cout<<"Ingrese el �ngulo theta en radianes: ";
    cin>>theta;
    x = r*cos(theta);
    y = r*sin(theta);
    cout<<"Coordenadas rectangulares: (x, y) = ("<<x<<", "<<y<<")"<<endl;
    return 0;
}
