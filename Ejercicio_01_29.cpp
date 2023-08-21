// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 29

/* Problema planteado: En una llanter�a se ha establecido una promoci�n de las llantas marca �Ponchadas�, dicha promoci�n consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran m�s de 10.
Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra. */
#include <iostream>
using namespace std;
int main()
{
	float cantidad, precio;
	cout<<"Ingrese la cantidad de llantas que compro: ";cin>>cantidad;
	
	if (cantidad<5)
	{
		precio=cantidad*300;
		cout<<"Usted debe pagar 300bs por cada llanta"<<endl;
		cout<<"El total de su compra es de: "<<precio<<"Bs";
	}
	if (cantidad>=5 && cantidad<10)
	{
		precio=cantidad*250;
		cout<<"Usted debe pagar 250bs por cada llanta"<<endl;
		cout<<"El total de su compra es de: "<<precio<<"Bs";
	}
	if (cantidad>10)
	{
		precio=cantidad*200;
		cout<<"Usted debe pagar 200bs por cada llanta"<<endl;
		cout<<"El total de su compra es de: "<<precio<<"Bs";
	}
	return 0;
}
