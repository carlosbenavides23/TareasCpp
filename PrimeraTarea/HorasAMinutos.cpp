//Conversion de horas a minutos
//El programa debe solicitar al usuario la cantidad de horas, luego convertirla a minutos y mostrar el resultado en pantalla.

#include <iostream>
using namespace std;

int main() {
	double horas;

	cout << "Ingrese la cantidad de horas: ";
	cin >> horas;

	double minutos = horas * 60;

	cout << "La cantidad de minutos es: " << minutos << " minutos" << endl;
	
	return 0;
}