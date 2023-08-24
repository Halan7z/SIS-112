// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 30

// Problema planteado: Calcular la sucesión para n numeros
#include<iostream>
using namespace std;
int main()
{
	int numero;
	cout<<"Ingrese (n): ";cin>>numero;
	float valor, resultado, signo=1;
    for (int i=1; i<=numero+1; i++) 
	{
		valor=(i+1)/i;
        signo*=-1; 
        resultado=valor+signo;
        cout<<endl<<valor<<endl;
    }
    cout<<"El resultado de la sucesión es: "<<resultado<<endl;
	return 0;
}
