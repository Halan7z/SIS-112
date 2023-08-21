// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares. //
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r, theta, x, y;
    cout<<"Ingrese la distancia r: ";
    cin>>r;
    cout<<"Ingrese el ángulo theta en radianes: ";
    cin>>theta;
    x = r*cos(theta);
    y = r*sin(theta);
    cout<<"Coordenadas rectangulares: (x, y) = ("<<x<<", "<<y<<")"<<endl;
    return 0;
}
