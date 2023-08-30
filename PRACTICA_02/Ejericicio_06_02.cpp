// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 6

// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	const int arreglo1[5] = {7, 3, 21, 89, 45};
    const int arreglo2[5] = {5, 2, 77, 36, 49};
    int arreglo3[10] = {};
    for (int i=0; i<5; i=i++)
    {
    	arreglo3[i*2]=arreglo1[i]; //PARES
    	arreglo3[(i*2)+1]=arreglo2[i]; //IMPARES
    }
    	//IMPRIME EL ARREGLO PARA VERIFICAR RESULTADOS
	cout<<endl<<"ARREGLO INTERCALADO: ";
	for (int i=0; i<10; i++)
		cout<<arreglo3[i]<<" ";
	return 0;
}
