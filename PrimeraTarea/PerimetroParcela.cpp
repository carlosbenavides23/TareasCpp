//Perimetro de una parcela
// El programa debe leer la base y la altura de una parcela, luego calcular el perimetro y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double base, altura;

	cout << "Ingrese la base de la parcela en metros: ";
	cin >> base;

	cout << "Ingrese la altura de la parcela en metros: ";
	cin >> altura;

	double perimetro = 2 * (base + altura);

	cout << "El perimetro de la parcela es: " << perimetro << " metros" << endl;
	
	return 0;
}