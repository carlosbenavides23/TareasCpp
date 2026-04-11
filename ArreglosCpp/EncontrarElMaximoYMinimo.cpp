/* El programa, a partir de una lista de numeros reales, debe encontrar el mayor
y el menor numero de la lista. */

#include <iostream>

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros] = {3.5, 7.2, 1.8, 67.0, 4.6,
                                2.3, 8.1, 6.4, 5.9,  0.7};
  // Se toma el primer valor como referencia inicial para comparar con los
  // demas.
  double maximo = numeros[0];
  double minimo = numeros[0];

  // Se empieza desde la posicion 1 porque la posicion 0 ya se uso como
  // referencia.
  for (int i = 1; i < numNumeros; ++i) {
    if (numeros[i] > maximo) {
      maximo = numeros[i];
    }
    if (numeros[i] < minimo) {
      minimo = numeros[i];
    }
  }

  std::cout << "El número máximo es: " << maximo << std::endl;
  std::cout << "El número mínimo es: " << minimo << std::endl;

  return 0;
}
