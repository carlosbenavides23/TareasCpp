//Edad de un estudiante
//El programa debe solicitar al usuario el año de nacimiento del estudiante, luego calcular su edad actual y mostrarla en pantalla.

#include <iostream>
using namespace std;

int main() {
	int anioNacimiento, anioActual;

	cout << "Ingrese el año de nacimiento del estudiante: ";
	cin >> anioNacimiento;

	cout << "Ingrese el año actual: ";
	cin >> anioActual;

	int edad = anioActual - anioNacimiento;

	cout << "La edad actual del estudiante es: " << edad << " años" << endl;
	
	return 0;
}