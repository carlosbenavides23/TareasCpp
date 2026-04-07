//Area de un terreno agricola
//El programa debe solicitar al usuario la base y la altura, luego calcular el area y mostrarlo en pantalla.

#include <iostream>
using namespace std;

int main() {
	double base, altura;

	cout << "Ingrese la base del terreno agricola en metros: ";
	cin >> base;

	cout << "Ingrese la altura del terreno agricola en metros: ";
	cin >> altura;

	cout << "El area del terreno agricola es: " << base * altura << " metros cuadrados" << endl;
	
	return 0;
}
