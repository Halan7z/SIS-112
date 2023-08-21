// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 22

/* Problema planteado:  En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. Si las computadoras son menos
de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado.  */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int cantidad, precio, descuento, compra, total;
	cout<<"Ingrese la cantidad de computadoras que compro: ";cin>>cantidad;
	cout<<"Ingrese el precio de las computadoras: ";cin>>precio;
	total=cantidad*precio;
	if (cantidad<5)
	{
		descuento=total*0.1;
		compra=total-descuento;
		cout<<"Obtubo un descuento del 10%, debe pagar: "<<compra<<endl;
	}
	if (cantidad>=5 && descuento<10)
	{
		descuento=total*0.2;
		compra=total-descuento;
		cout<<"Obtubo un descuento del 20%, debe pagar: "<<compra<<endl;
	}
	if (cantidad>=10)
	{
		descuento=total*0.4;
		compra=total-descuento;
		cout<<"Obtubo un descuento del 40%, debe pagar: "<<compra<<endl;
	}
	return 0;
}
