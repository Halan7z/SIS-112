// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 6

// Problema planteado: N�mero primo
#include <iostream>
using namespace std;
int main()
{
   int a=0, i, numero;
         cout<<"Ingrese numero para determinar si es primo: ";cin>>numero;
         for(i=1;i<(numero+1);i++){
         if(numero%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
    return 0;
}
