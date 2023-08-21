// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 25

/* Problema planteado:  Escribir un programa que permita adivinar un n�mero que sea genere internamente al azar, el cual est� en el rango de 0 a 50. El usuario debe adivinar este n�mero en base a
aproximaciones, para lo cual se dispone de 5 intentos. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));

    int numeroAleatorio = rand() % 51;
    cout << "Estoy pensando en un n�mero entre 0 y 50.\n";

    int intento = 1, limiteInferior = 0, limiteSuperior = 50;
    while (intento <= 5) {
        cout << "Intento " << intento << "\n? ";
        int intentoUsuario;
        cin >> intentoUsuario;

        if (intentoUsuario == numeroAleatorio) {
            cout << "Felicitaciones... �Adivinaste el n�mero!\n";
            break;
        } else if (intentoUsuario < numeroAleatorio) {
            limiteInferior = intentoUsuario;
            cout << "El n�mero est� entre " << limiteInferior << " y " << limiteSuperior << "\n";
        } else {
            limiteSuperior = intentoUsuario;
            cout << "El n�mero est� entre " << limiteInferior << " y " << limiteSuperior << "\n";
        }

        intento++;
    }

    if (intento > 5) {
        cout << "Lo siento, no adivinaste el n�mero. El n�mero era " << numeroAleatorio << "\n";
    }

    return 0;
}

