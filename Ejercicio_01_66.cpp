// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 66

/* Problema planteado:  Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
cantidad de billetes y monedas a convertir */
#include <iostream>
using namespace std;
int main() {
	
    int monto;
    cout<<"Ingrese la cantidad de dinero en Bs: ";cin>>monto;
    int billetes[] = {200, 100, 50, 20, 10};
    int monedas[] = {5, 2, 1};
    cout<<"La menor cantidad de billetes y monedas es:"<<endl;
    for (int i=0; i<sizeof(billetes)/sizeof(billetes[0]); i++) 
	{
        int cantidad = monto / billetes[i];
        if (cantidad > 0) 
		{
            cout<<cantidad<<" billete(s) de "<<billetes[i]<<" Bs."<< endl;
            monto %= billetes[i];
        }
    }

    for (int i = 0; i < sizeof(monedas) / sizeof(monedas[0]); i++) 
	{
        int cantidad=monto/monedas[i];
        if (cantidad>0) 
		{
            cout<<cantidad<<" moneda(s) de "<<monedas[i]<< " Bs." << endl;
            monto%=monedas[i];
        }
    }
    return 0;
}

