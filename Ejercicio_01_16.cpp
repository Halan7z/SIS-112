// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 16

// Problema planteado: Leer un n�mero entero que represente un valor en segundos y convierta en: horas, minutos y segundos //
#include <iostream>
using namespace std;
int main()
{
	int numero, hora, minutos, segundos, restante;
	cout<<"Ingrese un numero en segundos: "<<endl;cin>>numero;
	hora=numero/3600;
	restante=numero%3600;
	minutos=restante/60;
	segundos=restante%60;
	cout<<hora<<endl;
	cout<<minutos<<endl;
	cout<<segundos<<endl;
	return 0;
}
