// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 64

/* Problema planteado: Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero. */
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int numero;
    cout<<"Ingrese un numero entero positivo: ";cin>>numero;
    if (numero<0) 
	{
        cout<<"El número ingresado no es positivo."<<endl;
        return 1;
    }
    vector<int> digitos;
    while (numero>0) 
	{
        digitos.push_back(numero%10);
        numero/=10;
    }
    int n=digitos.size();
    for (int i=0; i<n-1; i++) 
	{
        for (int j=0; j<n-i-1; j++) 
		{
            if (digitos[j] > digitos[j + 1]) 
			{
                int temp = digitos[j];
                digitos[j] = digitos[j + 1];
                digitos[j + 1] = temp;
            }
        }
    }

    int numeroOrdenado = 0;
    for (int digito:digitos) 
	{
        numeroOrdenado = numeroOrdenado * 10 + digito;
    }
    cout << "El número ordenado es: " << numeroOrdenado << endl;
    return 0;
}

