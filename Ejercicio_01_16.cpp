// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 16

// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos //
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
