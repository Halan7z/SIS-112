// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 37

// Problema planteado: Obtenga el factorial de un número entero sin emplear el producto.
#include <iostream>
using namespace std;
int obtenerFactorial(int n) 
{
    if (n<=1)
        return 1;
    else
        return n*obtenerFactorial(n-1);
}
int main() 
{
    int numero;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;
    if (numero < 0)
        cout<<"Ingrese un numero positivo, no negativo"<<endl;
    else 
	{
        int factorial = obtenerFactorial(numero);
        cout<<"El factorial de "<<numero<<" es: "<<factorial<<endl;
    }
    return 0;
}

