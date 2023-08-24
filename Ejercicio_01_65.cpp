// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 65

/* Problema planteado:  Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo de manera literal:
											Ej: 23 : Veintitrés */
#include <iostream>
#include <string>
using namespace std;
string unidades[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
string especiales[] = {"Diez", "Once", "Doce", "Trece", "Catorce", "Quince", "Dieciséis", "Diecisiete", "Dieciocho", "Diecinueve"};
string decenas[] = {"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};
string obtenerLiteral(int num) {
    if (num>=1 && num<=9) 
	{
        return unidades[num];
    } else if (num>=10 && num<=19) 
	{
        return especiales[num - 10];
    } else if (num>=20 && num<=99) 
	{
        string literal = decenas[num/10];
        if (num%10!=0) 
		{
            literal += " y " + unidades[num % 10];
        }
        return literal;
    }
    return "Número fuera de rango";
}
int main() 
{
    int numero;
    cout<<"Ingrese un número no mayor a dos dígitos: ";cin>>numero;

    if(numero>= 1 && numero<=99) 
	{
        string literal = obtenerLiteral(numero);
        cout << "Literal: " << literal << endl;
    } else {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}

