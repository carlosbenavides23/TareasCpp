//Pago de pasaje de bus
//El programa debe solicitar el precio del pasaje y el numero de viajes realizados en la semana, luego calcular el gasto total y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double precioPasaje;
	int numeroViajes;

	cout << "Ingrese el precio del pasaje en cordobas: ";
	cin >> precioPasaje;

	cout << "Ingrese el numero de viajes realizados en la semana: ";
	cin >> numeroViajes;

	double gastoTotal = precioPasaje * numeroViajes;

	cout << "El gasto total en pasajes es: " << gastoTotal << endl;
	return 0;
}