// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 4

/* Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
Las edades al azar deben ser generadas a partir de 1 a 110 años. */
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
