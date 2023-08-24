// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 60

/* Problema planteado:Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos
siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese un número: ";cin>>n;
    int sumaImpares=1;  // primer número impar
    int cubo=1;         // primer cubo
    cout<<"Los primeros "<<n<<" cubos de Nicómaco son:"<<endl;
    for (int i=1; i<=n; i++) {
        cout<<i<< " cubo: " <<cubo<<endl;
        // Actualizamos la suma de impares y calculamos el siguiente cubo
        sumaImpares += 2 * i + 1;
        cubo = sumaImpares * sumaImpares;
    }
    return 0;
}

