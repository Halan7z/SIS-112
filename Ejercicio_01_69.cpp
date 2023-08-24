// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 69

/* Problema planteado:   Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir  */
#include <iostream>

using namespace std;

int factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int coeficienteBinomial(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    if (n >= 0 && k >= 0 && n >= k) {
        int coef = coeficienteBinomial(n, k);
        cout << "El coeficiente binomial C(" << n << ", " << k << ") es: " << coef << endl;
    } else {
        cout << "Los valores ingresados no cumplen las condiciones para calcular el coeficiente binomial." << endl;
    }

    return 0;
}

