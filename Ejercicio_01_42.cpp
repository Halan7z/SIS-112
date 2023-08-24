// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 42

/* Problema planteado:  En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada gallina se obtiene según la fórmula:
Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone */
#include <iostream>
using namespace std;
int main()
{
	float peso, altura, huevos, gallinas, promedio, calidad;
	cout<<"Ingrese el numero de gallinas a ser calificadas: ";cin>>gallinas;
	for (int i=1; i<=gallinas; i++)
	{
		cout<<endl<<"Ingrese el peso de la gallina: ";cin>>peso;
		cout<<"Ingrese la altura de la gallina: ";cin>>altura;
		cout<<"Ingrese el numero de huevos que pone la gallina: ";cin>>huevos;
		calidad=(peso*altura)/huevos;
		cout<<"La calidad de la gallina es de: "<<calidad<<endl;
		promedio=promedio+calidad;
	}
	cout<<endl<<"El promedio de calidad de las gallinas es de: "<<promedio/gallinas<<endl;
	return 0;
}
