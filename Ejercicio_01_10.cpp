// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 15/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es car�cter especial.
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char letra;
	cout<<"Ingrese una letra: ";cin>>letra;
	letra=toupper(letra);
	if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        cout<<"La letra que ingreso es una vocal"<<endl;
    else if ((letra >= 'A' && letra <= 'Z') && !(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')) {
        cout << "La letra que ingreso es una consonante" << endl;
    } else {
        cout << "La letra no es ni vocal ni consonante" << endl;
    }
	return 0;
}
