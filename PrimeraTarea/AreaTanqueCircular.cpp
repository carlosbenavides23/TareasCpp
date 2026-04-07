//Area de un tanque circular
//El programa debe solicitar al usuario el radio del tanque, luego calcular el area de la superficie y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double radio;

	cout << "Ingrese el radio del tanque circular en metros: ";
	cin >> radio;

	double area = 3.14159 * radio * radio;

	cout << "El area de la superficie del tanque circular es: " << area << " metros cuadrados" << endl;
	
	return 0;
}