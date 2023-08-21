// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 26

/* Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para asegurar el pago exacto de los artículos comprados la señora anota el precio y la
cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
llenar el carrito de manos con todos los artículos de primera necesidad. */
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

        cout<<"Ingresa el nombre del artículo: ";cin>>nombreArticulo;

        cout<<"Ingresa el precio del artículo: ";
        cin>>precioArticulo;

        cout<<"Ingresa la cantidad del artículo: ";
        cin>>cantidad;

        double subtotal = precioArticulo * cantidad;
        totalCompra += subtotal;

        cout<<"Subtotal del artículo: $"<<subtotal<<endl;

        cout<<"¿Deseas comprar más productos? (S/N): ";
        cin>>deseaComprar;
    }
    cout<<endl<<"Total de la compra: "<<totalCompra<<" Bs"<<endl;
    cout<<"Gracias por tu compra, ¡Hasta luego!"<<endl;

    return 0;
}



