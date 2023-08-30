// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 4

/* Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con n�meros al azar, determine:
el porcentaje de mayores (>=18 a�os) y menores de edad (<18 a�os).
Las edades al azar deben ser generadas a partir de 1 a 110 a�os. */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	const int size=50;
	int mayores=0, menores=0;
	int arreglo [size];
	srand(time(NULL));
	for (int i=0; i<size; i++)
	{
		arreglo[i]=rand()%110+1;
	}
	for (int i=0; i<size; i++)
	{
		if (arreglo[i]>=18)
			mayores++;
		else if (arreglo[i]<18)
			menores++;
	}
	cout<<endl<<"ARREGLO: ";
	for (int i=0; i<size; i++)
		cout<<arreglo[i]<<" ";
	cout<<endl<<"Hay "<<(static_cast<double>(mayores)/size)*100<<" % de mayores en el arreglo"<<endl;
	cout<<"Hay "<<(static_cast<double>(menores)/size)*100<<" % de menores en el arreglo"<<endl;

	return 0;
}
