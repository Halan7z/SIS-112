// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 32

// Problema planteado: Leer un n�mero entero y mostrarlo con las cifras al rev�s
#include<iostream>
using namespace std;
int main()
{
	int numero, numeroReves, digito=0;
	cout<<"Ingrese un numero: ";cin>>numero;
 	while (numero!=0) 
	{
        digito=numero%10;
        numeroReves=numeroReves*10+digito;
        numero=numero/10;
    }
    cout<<"El numero con sus cifras al reves es: "<<numeroReves<<endl;
	return 0;
}
