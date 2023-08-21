// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 23

/* Problema planteado:  Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matem�tico Ullman) que
consiste en lo siguiente:
- Empiece con cualquier entero positivo.
- Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
- Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia ser�:
26 13 40 20 10 5 16 8 4 2 1
 */
#include <iostream>
using namespace std;
int main()
{
	int numero, conjetura=0;
	cout<<"Ingrese un numero entero >1: ";cin>>numero;
	cout<<"\n"<<numero<<" ";
	while (numero!=1)
	{
		if (numero%2==0)
		{
			conjetura=numero/2;
			cout<<conjetura<<" ";
			numero=conjetura;
		}
		else
		{
			conjetura=(numero*3)+1;
			cout<<conjetura<<" ";
			numero=conjetura;
		}
	}
	return 0;
}
