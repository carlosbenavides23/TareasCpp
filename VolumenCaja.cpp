//Volumen de una caja de exportacion
//El programa debe solicitar al usuario la longitud del lado de la caja, luego calcular el volumen y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double lado;

	cout << "Ingrese la longitud del lado de la caja en metros: ";
	cin >> lado;

	double volumen = lado * lado * lado;

	cout << "El volumen de la caja de exportacion es: " << volumen << " metros cubicos" << endl;
	
	return 0;
}