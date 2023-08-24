// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 23/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 55

/* Problema planteado: Generar las secuencias:
1 2 3 4 ����..n
1 2 3 4�.. n-1
1 2 3 �...n-2
��..
1
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Ingrese el valor de n: ";cin>>n;
	for (int i=1; i<=n; i++) 
	{
        for (int j=1; j<=n-i+1; j++) 
		{
            cout<<j<<" ";
        }
        cout << "\n";
    }
	return 0;
}
