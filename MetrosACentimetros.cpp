//Conversion de metros a centimetros
//El programa debe solicitar al usuario la cantidad de metros, luego convertirla a centimetros y mostrar el resultado en pantalla.

#include <iostream>
using namespace std;

int main() {
	double metros;

	cout << "Ingrese la cantidad de metros: ";
	cin >> metros;

	double centimetros = metros * 100;

	cout << "La cantidad de centimetros es: " << centimetros << " cm" << endl;
	
	return 0;
}