// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 11

/* Problema planteado:  Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato
civil. Se paga por categoría de acuerdo con la siguiente tabla.
Categoria Permanente Contrato Civil
A 			 25% 		   18%
B 			 20% 		   14%
C 			 15% 		   12%
Calcule el total ganado siendo el salario por hora de 150 Bs por hora
Se debe ingresar cuantas horas a la semana pasa clases y en que categoría está. */
#include <iostream>
#include<cctype>
using namespace std;

int funcionTipo()
{
	cout<<"Ingrese su tipo de contrato (P o C): ";cin>>tipo;
	tipo=toupper(tipo)
	if (tipo=="P")
	{
		cout<<"Ingrese su categoria: ";cin>>categoria;
		categoria=toupper(categoria)
	
		if (categoria=="A")
		{
		
		}
		if (categoria=="B")
		{
		
		}
		if (categoria=="C")
		{
		
		}
		else 
		{
			cout<<"Categoria invalida"
			break;	
		}
	if (tipo=="C")
	{
		
	}
	else 
	{
		cout<<"Tipo invalido"
		break;	
	}   
}

int main()
{
	float horas;
	char categoria, tipo;
	
	cout<<"Ingrese su categoria: ";cin>>categoria;
	categoria=toupper(categoria)
	
	if (categoria=="A")
	{
		
	}
	if (categoria=="B")
	{
		
	}
	if (categoria=="C")
	{
		
	}
	else 
	{
		cout<<"Categoria invalida"
		break;	
	}
	return 0;
}
