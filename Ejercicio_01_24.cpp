// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 24

// Problema planteado:  Leer un numero entero y muestre la suma de sus dos primeros dígitos. //
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    long long int numero, temp, suma=0, contador=0;
    cout<<"Ingresa un numero: ";cin>>numero;

    // Almacenar los dígitos en un vector
    vector<int> digitos;
    temp = numero;
    while (temp > 0) 
	{
        digitos.push_back(temp % 10);
        temp /= 10;
    }
    // Calcular la suma de los primeros dos dígitos
    for (int i = digitos.size() - 1; i >= 0 && contador < 2; i--) 
	{
        suma += digitos[i];
        contador++;
    }
    cout<<"La suma de los primeros dos digitos es: "<<suma<<"\n";

    return 0;
}

