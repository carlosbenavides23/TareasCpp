//Compra de cuadernos escolares 
//El programa debe leer el precio de cada cuaderno, luego calcular el total a pagar por la cantidad comprada y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double precioCuaderno;
	int cantidad;

	cout << "Ingrese el precio de cada cuaderno en cordobas: ";
	cin >> precioCuaderno;

	cout << "Ingrese la cantidad de cuadernos comprados: ";
	cin >> cantidad;

	double total = precioCuaderno * cantidad;

	cout << "El total a pagar es: " << total << endl;
	return 0;
}