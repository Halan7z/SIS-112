// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 67

/* Problema planteado:  Leer un n�mero entero y determinar si la suma de sus d�gitos distintos de cero forman
un n�mero primo, de ser as� imprima el mensaje respectivo.  */
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
    cout<<"Ingrese un n�mero entero: ";
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

