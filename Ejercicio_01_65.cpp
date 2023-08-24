// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 65

/* Problema planteado:  Escribir un progama que acepte un n�mero no mayor a dos d�gitos y muestre el mismo de manera literal:
											Ej: 23 : Veintitr�s */
#include <iostream>
#include <string>
using namespace std;
string unidades[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
string especiales[] = {"Diez", "Once", "Doce", "Trece", "Catorce", "Quince", "Diecis�is", "Diecisiete", "Dieciocho", "Diecinueve"};
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
    return "N�mero fuera de rango";
}
int main() 
{
    int numero;
    cout<<"Ingrese un n�mero no mayor a dos d�gitos: ";cin>>numero;

    if(numero>= 1 && numero<=99) 
	{
        string literal = obtenerLiteral(numero);
        cout << "Literal: " << literal << endl;
    } else {
        cout << "N�mero fuera de rango." << endl;
    }

    return 0;
}

