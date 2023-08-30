// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 8

/* Problema planteado: - Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
desempeño mayor con relación al promedio del curso.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    // Datos preestablecidos
    vector<int> calificaciones = {95, 92, 98, 93, 58};
    vector<string> nombres = {"Juan", "Maria", "Carlos", "Ana", "Luis"};
    vector<string> carreras = {"SIS", "MED", "SIS", "DER", "ECO"};
    // Encontrar la calificación máxima y mínima
    int max_calificacion = calificaciones[0];
    int min_calificacion = calificaciones[0];
    string nombre_max, nombre_min, mejor_carrera;
    for (int i=1; i<calificaciones.size(); i++) 
	{
        if (calificaciones[i]>max_calificacion) 
		{
            max_calificacion = calificaciones[i];
            nombre_max = nombres[i];
        }
        if (calificaciones[i] < min_calificacion) 
		{
            min_calificacion = calificaciones[i];
            nombre_min = nombres[i];
        }
    }
    // Calcular el promedio del curso
    int suma_calificaciones = 0;
    for (int calificacion:calificaciones)
        suma_calificaciones+=calificacion;
    double promedio_curso = static_cast<double>(suma_calificaciones) / calificaciones.size();
    // Encontrar la carrera con mejor desempeño
    for (int i=0; i<carreras.size(); i++) 
	{
        if (calificaciones[i] > promedio_curso) 
		{
            mejor_carrera = carreras[i];
            break;
        }
    }
    // Mostrar resultados
    cout<<"Alumno con mayor calificación: "<<nombre_max<<endl;
    cout<<"Alumno con menor calificación: "<<nombre_min<<endl;
    cout<<"Carrera con mejor desempeño: "<<mejor_carrera<<endl;
    return 0;
}
