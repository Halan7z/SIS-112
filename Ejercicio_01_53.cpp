// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/08/2023

// Fecha modificación: 22/08/2023

// Número de ejericio: 53

/* Problema planteado:   . Escriba un programa que permita al usuario obtener los valores de las funciones trigonométricas:  */
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double angulo_grados;
    cout << "Ingrese el ángulo en grados: ";
    cin >> angulo_grados;

    // Convertir el ángulo de grados a radianes
    double angulo_radianes = angulo_grados * M_PI / 180.0;

    double seno = sin(angulo_radianes);
    double coseno = cos(angulo_radianes);
    
    // Verificar si el ángulo no es un múltiplo de 90 grados para evitar la tangente infinita
    if (fmod(angulo_grados, 90.0) != 0.0) {
        double tangente = tan(angulo_radianes);
        cout<< "Ángulo en radianes: " << angulo_radianes << endl;
        cout<< "Seno: " << seno << endl;
        cout<< "Coseno: " << coseno << endl;
        cout<< "Tangente: " << tangente << endl;
    } else {
        cout<<"Ángulo en radianes: "<<angulo_radianes<<endl;
        cout<<"Seno: " <<seno<<endl;
        cout<<"Coseno: " <<coseno<<endl;
        cout<<"El ángulo es un múltiplo de 90 grados, la tangente es indefinida."<<endl;
    }
    return 0;
}

