//Compra en una tienda de celulares
//El programa debe solicitar al usuario el precio de un accesorio y la cantidad comprada, luego calcular el total a pagar y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double precioAccesorio;
	int cantidad;

	cout << "Ingrese el precio del accesorio en cordobas: ";
	cin >> precioAccesorio;

	cout << "Ingrese la cantidad de accesorios comprados: ";
	cin >> cantidad;

	double total = precioAccesorio * cantidad;

	cout << "El total a pagar es: " << total << endl;
	
	return 0;
}