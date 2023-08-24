// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 67

/* Problema planteado:  Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman
un número primo, de ser así imprima el mensaje respectivo.  */
#include <iostream>
using namespace std;
bool esPrimo(int num) 
{
    if (num<=1) 
	{
        return false;
    }
    for (int i=2; i*i<=num; i++) 
	{
        if (num%i==0) 
		{
            return false;
        }
    }
    return true;
}
int main() 
{
    int numero;
    cout<<"Ingrese un número entero: ";
    cin>>numero;
    int sumaDigitos = 0;

    while (numero>0) 
	{
        int digito=numero%10;
        if (digito!=0) 
		{
            sumaDigitos+=digito;
        }
        numero/=10;
    }
			// Verificacion de si es primo o no
    if (esPrimo(sumaDigitos)) 
	{
        cout<<"La suma de los digitos distintos de cero forma un numero primo."<<endl;
    } 
	else 
	{
        cout<<"La suma de los digitos distintos de cero NO forma un numero primo."<<endl;
    }

    return 0;
}

