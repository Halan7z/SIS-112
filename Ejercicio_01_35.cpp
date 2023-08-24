// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 35

/* Problema planteado:  Un supermercado decide efectuar una promoción de descuentos por el valor de las compras que efectúan sus clientes, esta promoción se basa en las siguientes
condiciones: Si el total de ventas es < 100 Bs. no se aplica ningún descuento
Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo. */
#include <iostream>
using namespace std;
int main()
{
	int numeroC, i=1, total, ventas=0, descuento=0, d;
	
	cout<<"Ingrese el total de clientes: ";cin>>numeroC;
	
	for (i=0; i<numeroC; i++)

	{
		cout<<"Ingrese el monto total de su compra: ";cin>>total;
		ventas=ventas+total;
		if (total<100)
			d=0;
		if (total>=100 && total<500)
			d=total*0.05;
		if (total >=500)
			d=total*0.08;
		cout<<"El total de su compra aplicado el descuento es de: "<<d<<endl;
		descuento=descuento+d;
	}
	cout<<endl<<"El total de las ventas del dia fueron de: "<<ventas<<endl;
	cout<<"El numero de clientes del dia de hoy fue: "<<numeroC<<endl;
	cout<<"El total de ventas con descuentos fue de: "<<ventas-descuento<<endl;
	
	return 0;
}
