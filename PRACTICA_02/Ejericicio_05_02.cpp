// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 5

/* Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas. */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int size, mayor=0, menor=0, suma=0;
	cout<<"Ingrese la cantidad de personas: ";cin>>size;
	int arreglo[size];
	srand(time(NULL));
	//CREACION DEL ARREGLO
	for (int i=0; i<size; i++)
	{
		arreglo[i]=rand()%240+50+1;
	}
	// ITERACION DEL ARREGLO
	mayor = menor = arreglo[0];
	for (int i = 0; i < size; i++)
	{
    	suma += arreglo[i];
    	if (arreglo[i] < menor)
        	menor = arreglo[i];
    	if (arreglo[i] > mayor)
        	mayor = arreglo[i];
	}
		//IMPRIME EL ARREGLO PARA VERIFICAR RESULTADOS
	cout<<endl<<"ARREGLO: ";
	for (int i=0; i<size; i++)
		cout<<arreglo[i]<<" ";
	cout<<endl<<"La mayor estatura es de: "<<mayor<<" cm";
	cout<<endl<<"La menor estatura es de: "<<menor<<" cm";
	cout<<endl<<"La estatura promedio es de: "<<static_cast<double>(suma)/size <<" cm";
	return 0;
}
