// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 37

/* Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas: 5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio
del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el cambio a entregar empleando el menor número posible de monedas. */
#include <iostream>
using namespace std;
int main() 
{
    double precio, efectivo, cambio;
    cout<<"Ingrese el precio del artículo en bolivianos: ";cin>>precio;
    cout<<"Ingrese la cantidad entregada por el consumidor en bolivianos: ";cin>>efectivo;
    cambio=efectivo-precio;
    if (cambio<0) 
        cout << "El monto entregado no es suficiente." << endl;
    else 
	{
        int monedas5 = cambio / 5;
        cambio -= monedas5 * 5;

        int monedas1 = cambio / 1;
        cambio -= monedas1 * 1;

        int monedas050 = cambio / 0.50;
        cambio -= monedas050 * 0.50;

        int monedas020 = cambio / 0.20;
        cambio -= monedas020 * 0.20;

        int monedas010 = cambio / 0.10;

        cout<<"CAMBIO A ENTREGAR:"<<endl;
        cout<<"Monedas de 5 Bs.: "<<monedas5<<endl;
        cout<<"Monedas de 1 Bs.: "<<monedas1<<endl;
        cout<<"Monedas de 0.50 Bs.: "<<monedas050<<endl;
        cout<<"Monedas de 0.20 Bs.: "<<monedas020<<endl;
        cout<<"Monedas de 0.10 Bs.: "<<monedas010<<endl;
    }
    return 0;
}

