// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 47

/* Problema planteado:  Un negocio de �Cosm�ticos� de belleza, contratara a N vendedoras para la venta de sus productos. Cada Vendedora en promedio debe vender 10 productos en un mes.
La cancelaci�n de los sueldos a las vendedoras se realiza cada fin de mes, bajo las siguientes caracter�sticas
Una vendedora recibe un sueldo b�sico de acuerdo a su antig�edad (ver tabla) y adem�s se a�ade un sueldo extra por comisi�n de ventas del 10% del total vendido. */
#include <iostream>
#define BASICO 2362
#define BONUS 100
using namespace std;
int main()
{
	float vendedoras, year, productos, neto, pago=0, antiguedad, bono;
	cout<<"Ingrese el numero de vendedoras: ";cin>>vendedoras;
	for (int i=1; i<=vendedoras; i++)
	{
		cout<<endl<<"VENDEDORA "<<i<<endl;
		cout<<"Ingrese a�os trabajados: ";cin>>year;
		cout<<"Ingrese la cantidad de productos vendidos : ";cin>>productos;
		if (productos<10)
		{
			cout<<"No vendio los productos suficientes";
			break;
		}
		else
		{
			if (year<2)
			{
				antiguedad=BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=2 && year<=4)
			{
				antiguedad=(BASICO*0.05)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=5 && year<=7)
			{
				antiguedad=(BASICO*0.11)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=8 && year<=10)
			{
				antiguedad=(BASICO*0.18)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=11 && year<=14)
			{
				antiguedad=(BASICO*0.26)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=15 && year<=19)
			{
				antiguedad=(BASICO*0.34)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
				
			}
			if (year>=20 && year<=24)
			{
				antiguedad=(BASICO*0.42)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			if (year>=25)
			{
				antiguedad=(BASICO*0.50)+BASICO;
				bono=BONUS*productos;
				neto=bono+antiguedad;
			}
			cout<<endl<<"Se le debe pagar a la VENDEDORA "<<i<<": "<<antiguedad<<endl;
			cout<<"La VENDEDORA "<<i<<" tendra de extras: "<<bono<<endl;
			pago=pago+neto;
		}
	}
	cout<<endl<<"El total a pagar a todas las VENDEDORAS es: "<<pago<<endl;
	return 0;
}
