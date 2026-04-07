//Promedio de notas universitarias
//El programa debe solicitar al usuario las tres notas de un estudiante, luego calcular el promedio final y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3;
	cout << "Ingrese la primera nota del estudiante: ";
	cin >> nota1;

	cout << "Ingrese la segunda nota del estudiante: ";
	cin >> nota2;

	cout << "Ingrese la tercera nota del estudiante: ";
	cin >> nota3;

	double promedio = (nota1 + nota2 + nota3) / 3;

	cout << "El promedio final del estudiante es: " << promedio << endl;
	
	return 0;
}