// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 41

/* Problema planteado:  . Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al doble de una hora normal, considere además un descuento del 5% a todos los obreros
para pagar su prima de seguro. 
Por lo tanto determine: el pago total y el pago neto por cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la prima de manera general. */
#include <iostream>
using namespace std;
int main()
{
	float total, neto, general=0, prima=0, obreros, tarifa, horas, i, extra;
	cout<<"Ingrese el numero de obreros que cobraran su pago semanal: ";cin>>obreros;
	for (i=1; i<=obreros; i++)
	{
		cout<<"Ingrese su tarifa por hora: ";cin>>tarifa;
		cout<<"Ingrese sus horas trabajadas: ";cin>>horas;
		if (horas>40)
		{
			extra=(horas-40)*(tarifa*2);
			total=(tarifa*40)+extra;
			neto=total-(total*0.05);
		}
		else
		{
			total=(tarifa*horas);
			neto=total-(total*0.05);
		}
		cout<<"Su pago total es de: "<<total<<endl;
		general=general+total;
		cout<<"Su pago neto es de: "<<neto<<endl;
	}
	prima=general*0.05;
	cout<<"El pago total de todos los obreros es de: "<<general<<endl;
	cout<<"La prima retenida es de: "<<prima<<endl;
	
	return 0;
}
