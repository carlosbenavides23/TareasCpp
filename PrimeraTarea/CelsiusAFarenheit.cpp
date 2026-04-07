//Conversion de tempreaturas de grados Celsius a Fahrenheit
//El programa debe solicitar al usuario la temperatura en grados Celsius, luego convertirla a grados Fahrenheit y mostrar el resultado en pantalla.

#include <iostream>
using namespace std;

int main() {
	double celsius;

	cout << "Ingrese la temperatura en grados Celsius: ";
	cin >> celsius;

	double fahrenheit = (celsius * 9 / 5) + 32;

	cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
	
	return 0;
}