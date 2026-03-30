//Perimetro de un tanque
//El programa debe solicitar al usuario el radio del tanque, luego calcular el perimetro de la circunferencia y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double radio;

	cout << "Ingrese el radio del tanque circular en metros: ";
	cin >> radio;

	double perimetro = 2 * 3.14159 * radio;

	cout << "El perimetro de la circunferencia del tanque circular es: " << perimetro << " metros" << endl;
	
	return 0;
}