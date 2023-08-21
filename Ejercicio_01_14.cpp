// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 14

/* Problema planteado: Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese
el valor de cero calculo la suma y el promedio de estos. */
#include <iostream>
using namespace std;
int main() 
{
    float valor=0, suma = 0, promedio=0, conteo = 0;
    cout<<"Ingrese un numero: ";cin>>valor;
    while (valor != 0) 
	{
        if (valor > 0) 
		{
            suma += valor;
            conteo++;
        }

        cout<<"Ingrese un numero: ";cin>>valor;
    }
    if (conteo > 0) 
	{
        promedio = suma/ conteo;
        cout<<"La suma es: "<<suma<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
    } 
	else 
	{
        cout << "No se ingresaron valores positivos." << endl;
    }

    return 0;
}

