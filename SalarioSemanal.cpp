//Salario semanal
//El programa debe solicitar al usuario el salario por hora y el numero de horas trabajadas, luego calcular el salario semanal y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double salarioPorHora,horasTrabajadas;

	cout << "Ingrese el salario por hora en cordobas: ";
	cin >> salarioPorHora;

	cout << "Ingrese el numero de horas trabajadas en la semana: ";
	cin >> horasTrabajadas;

	double salarioSemanal = salarioPorHora * horasTrabajadas;

	cout << "El salario semanal es: " << salarioSemanal << " cordobas" << endl;
	
	return 0;
}