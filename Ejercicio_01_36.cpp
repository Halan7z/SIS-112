// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 21/08/2023

// N�mero de ejericio: 36

/* Problema planteado:  Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la cantidad de alumnos mayores de 18 a�os, y la cantidad de alumnos que miden m�s de 1.75 cm */
#include <iostream>
using namespace std;
int main()
{
	float cantidad, edad, i, mayores, altos, mediaEdad=0, mediaEstatura=0, estatura;
	cout<<"Ingrese la cantidad de alumnos: ";cin>>cantidad;
	for (i=0; i<cantidad; i++)
	{
		cout<<"Ingrese la edad del estudiante: ";cin>>edad;
		cout<<"Ingrese la estatura del estudiante: ";cin>>estatura;
		mediaEdad=mediaEdad+edad;
		mediaEstatura=mediaEstatura+estatura;
		if (edad>18)
			mayores++;	
		if (estatura>1.75)
			altos++;
	}
	cout<<"La media de las edades de los estudiantes es de: "<<mediaEdad/cantidad<<endl;
	cout<<"La media de las estaturas de los estudiantes es de :"<<mediaEstatura/cantidad<<endl;
	cout<<mayores<<"  alumnos son mayores de 18 a�os"<<endl;
	cout<<altos<<" alumnos tienen una estatura mayor a 1.75m"<<endl;

	return 0;
}
