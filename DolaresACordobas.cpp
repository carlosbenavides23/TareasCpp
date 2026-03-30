//Conversion de dolares a cordobas
//El programa debe solicitar al usuario la cantidad de dolares, luego convertirla a cordobas utilizando una tasa de cambio fija y mostrar el resultado en pantalla.

#include <iostream>
using namespace std;

int main() {
	double dolares;

	const double tasaCambio = 36.62; // Tasa de cambio fija

	cout << "Ingrese la cantidad de dolares: ";
	cin >> dolares;

	double cordobas = dolares * tasaCambio;

	cout << "La cantidad en cordobas es: " << cordobas << " C$" << endl;
	
	return 0;
}