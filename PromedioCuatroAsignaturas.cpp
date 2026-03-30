//Promedio de cuatro asignaturas
//El programa debe solicitar al usuario las notas de Programación, Matemática, Inglés y Bases de Datos, luego calcular el promedio final y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double notaProgramacion, notaMatematica, notaIngles, notaBasesDatos;

	cout << "Ingrese la nota de Programacion: ";
	cin >> notaProgramacion;

	cout << "Ingrese la nota de Matematica: ";
	cin >> notaMatematica;

	cout << "Ingrese la nota de Ingles: ";
	cin >> notaIngles;

	cout << "Ingrese la nota de Bases de Datos: ";
	cin >> notaBasesDatos;

	double promedio = (notaProgramacion + notaMatematica + notaIngles + notaBasesDatos) / 4;

	cout << "El promedio final del estudiante es: " << promedio << endl;
	
	return 0;
}