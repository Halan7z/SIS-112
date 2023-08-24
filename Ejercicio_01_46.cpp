// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 46

/* Problema planteado:  La empresa �Limbo S.A.�, empresa de seguros tiene contratados a N vendedores. Cada uno hace tres ventas a la semana. Su pol�tica de pagos es que un vendedor recibe un
sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compa��a desea saber cu�nto dinero obtendr� en la semana cada vendedor por concepto de
comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y sus comisiones */
#include <iostream>
using namespace std;
int main()
{
	float vendedores, sueldo, bono, ventas;
	cout<<"Ingrese la cantidad de vendedores de la empresa: ";cin>>vendedores;
	for (int i=1; i<=vendedores; i++)
		{
			cout<<endl<<"Ingrese el sueldo base de el vendedor: ";cin>>sueldo;
			cout<<"Ingrese el total de sus ventas: ";cin>>ventas;
			bono=ventas*0.10;
			cout<<endl<<"Por concepto de bonos obtendra: "<<bono<<endl;
			cout<<"Por sueldo y bonos obtendra: "<<sueldo+bono<<endl;
		}
	return 0;
}
