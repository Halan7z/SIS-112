// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 59

/* Problema planteado: Conjetura capic�a: Para obtener un n�mero capic�a a partir de otro n�mero se invierte el orden de sus cifras y se suman el n�mero dado y el invertido. Este proceso se
contin�a las veces que sean necesarias hasta obtener un capic�a. */
#include <iostream>
using namespace std;
int reversoNumero(int num) 
{
    int reverso=0;
    while (num>0) 
	{
        reverso=reverso*10+num%10;
        num/=10;
    }
    return reverso;
}

bool esCapicua(int num) 
{
    return num==reversoNumero(num);
}

int main() 
{
    int limiteInferior, limiteSuperior;
    cout<<"Ingrese el l�mite inferior: ";cin>>limiteInferior;
    cout<<"Ingrese el l�mite superior: ";cin>>limiteSuperior;
    cout<<"N�meros capic�as en el rango ["<<limiteInferior<<", "<<limiteSuperior<<"]:\n";
    for (int num = limiteInferior; num <= limiteSuperior; ++num) 
	{
        int iteraciones=0;
        int original=num;
        while (!esCapicua(num)) 
		{
            int reverso=reversoNumero(num);
            num=num+reverso;
            iteraciones++;
        }
        cout<<original<<" se convierte en un capic�a en "<<iteraciones<<" pasos: "<<num<<endl;
    }
    return 0;
}
