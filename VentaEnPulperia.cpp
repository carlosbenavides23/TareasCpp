//Venta en una pulperia
//El programa debe solicitar al usuario el precio del arroz y el precio del azúcar, luego calcular el total a pagar y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double arroz, azucar;
	cout << "Ingrese el precio del arroz en cordobas: ";
	cin >> arroz;

	cout << "Ingrese el precio del azucar en cordobas: ";
	cin >> azucar;

	double total = arroz + azucar;

	cout << "El total a pagar es: " << total << endl;
	return 0;
}
