// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 59

/* Problema planteado: Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte el orden de sus cifras y se suman el número dado y el invertido. Este proceso se
continúa las veces que sean necesarias hasta obtener un capicúa. */
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
    cout<<"Ingrese el límite inferior: ";cin>>limiteInferior;
    cout<<"Ingrese el límite superior: ";cin>>limiteSuperior;
    cout<<"Números capicúas en el rango ["<<limiteInferior<<", "<<limiteSuperior<<"]:\n";
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
        cout<<original<<" se convierte en un capicúa en "<<iteraciones<<" pasos: "<<num<<endl;
    }
    return 0;
}
