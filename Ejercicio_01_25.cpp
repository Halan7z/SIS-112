// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 25

/* Problema planteado:  Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
aproximaciones, para lo cual se dispone de 5 intentos. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));

    int numeroAleatorio = rand() % 51;
    cout << "Estoy pensando en un número entre 0 y 50.\n";

    int intento = 1, limiteInferior = 0, limiteSuperior = 50;
    while (intento <= 5) {
        cout << "Intento " << intento << "\n? ";
        int intentoUsuario;
        cin >> intentoUsuario;

        if (intentoUsuario == numeroAleatorio) {
            cout << "Felicitaciones... ¡Adivinaste el número!\n";
            break;
        } else if (intentoUsuario < numeroAleatorio) {
            limiteInferior = intentoUsuario;
            cout << "El número está entre " << limiteInferior << " y " << limiteSuperior << "\n";
        } else {
            limiteSuperior = intentoUsuario;
            cout << "El número está entre " << limiteInferior << " y " << limiteSuperior << "\n";
        }

        intento++;
    }

    if (intento > 5) {
        cout << "Lo siento, no adivinaste el número. El número era " << numeroAleatorio << "\n";
    }

    return 0;
}

