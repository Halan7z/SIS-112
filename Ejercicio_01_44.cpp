// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 44

/* Problema planteado:  La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al
precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se
aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
calcular el pago del IVA del 13% al servicio de Impuestos Nacionales */
#include <iostream>
using namespace std;
int main() 
{
    int n;
    double sumaTotalVentas = 0, precioProducto;
    cout<<"Ingrese el número de productos vendidos: ";cin>>n;
    for (int i = 1; i <= n; i++) 
	{
        cout<<"Ingrese el precio del producto "<<i<<" en bolivianos: ";
        cin>>precioProducto;
        sumaTotalVentas += precioProducto;
    }
    double iva = sumaTotalVentas * 0.13;
    sumaTotalVentas+=iva;
    if (sumaTotalVentas > 2500) 
	{
        double descuento = sumaTotalVentas * 0.05;
        sumaTotalVentas -= descuento;
    }
    cout << "Suma total de las ventas: " << sumaTotalVentas << " Bs." << endl;
    cout << "Pago del IVA al servicio de Impuestos Nacionales: " << iva << " Bs." << endl;
    return 0;
}

