// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 26

/* Problema planteado: En una tienda comercial, las amas de casa compran diversos art�culos de primera necesidad. Una ama de casa selecciona los art�culos de su preferencia pasando por los
distintos mostradores, cada art�culo elegido es colocado en un carrito de mano, para asegurar el pago exacto de los art�culos comprados la se�ora anota el precio y la
cantidad del art�culo, estableciendo cuanto pagara por este articulo; as� sumara los dem�s art�culos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
llenar el carrito de manos con todos los art�culos de primera necesidad. */
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    double totalCompra = 0.0;

    cout<<"Bienvenida a la tienda\n";

    char deseaComprar = 'S';

    while (deseaComprar == 'S' || deseaComprar == 's') 
	{
        string nombreArticulo;
        double precioArticulo;
        int cantidad;

        cout<<"Ingresa el nombre del art�culo: ";cin>>nombreArticulo;

        cout<<"Ingresa el precio del art�culo: ";
        cin>>precioArticulo;

        cout<<"Ingresa la cantidad del art�culo: ";
        cin>>cantidad;

        double subtotal = precioArticulo * cantidad;
        totalCompra += subtotal;

        cout<<"Subtotal del art�culo: $"<<subtotal<<endl;

        cout<<"�Deseas comprar m�s productos? (S/N): ";
        cin>>deseaComprar;
    }
    cout<<endl<<"Total de la compra: "<<totalCompra<<" Bs"<<endl;
    cout<<"Gracias por tu compra, �Hasta luego!"<<endl;

    return 0;
}



