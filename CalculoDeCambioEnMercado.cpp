//Calculo de cambio en un mercado
//El programa debe leer el precio del queso y tortillas, luego calcular el total a pagar

#include <iostream>
using namespace std;

int main() {
	double queso, tortillas;

	cout << "Ingrese el precio del queso en cordobas: ";
	cin >> queso;

	cout << "Ingrese el precio de las tortillas en cordobas: ";
	cin >> tortillas;

	double total = queso + tortillas;

	cout << "El total a pagar es: " << total << endl;
	return 0;
}