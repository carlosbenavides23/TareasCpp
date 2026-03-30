//Distancia recorrida por un transporte
//El programa debe solicitar al usuario la velocidad del transporte y el tiempo de viaje, luego calcular la distancia recorrida y mostrarla en pantalla.

#include <iostream>
using namespace std;

int main() {
	double velocidad, tiempo;

	cout << "Ingrese la velocidad del transporte en km/h: ";
	cin >> velocidad;

	cout << "Ingrese el tiempo de viaje en horas: ";
	cin >> tiempo;

	double distancia = velocidad * tiempo;

	cout << "La distancia recorrida por el transporte es: " << distancia << " km" << endl;
	return 0;
}