// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 24

// Problema planteado:  Leer un numero entero y muestre la suma de sus dos primeros d�gitos. //
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    long long int numero, temp, suma=0, contador=0;
    cout<<"Ingresa un numero: ";cin>>numero;

    // Almacenar los d�gitos en un vector
    vector<int> digitos;
    temp = numero;
    while (temp > 0) 
	{
        digitos.push_back(temp % 10);
        temp /= 10;
    }
    // Calcular la suma de los primeros dos d�gitos
    for (int i = digitos.size() - 1; i >= 0 && contador < 2; i--) 
	{
        suma += digitos[i];
        contador++;
    }
    cout<<"La suma de los primeros dos digitos es: "<<suma<<"\n";

    return 0;
}

