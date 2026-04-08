/* El programa, a partir de una lista de numeros reales, debe encontrar el mayor
y el menor numero de la lista. */

#include <iostream>

int main() {
  const int SIZE = 10;
  double numeros[SIZE] = {3.5, 7.2, 1.8, 67.0, 4.6, 2.3, 8.1, 6.4, 5.9, 0.7};
  double maximo = numeros[0];
  double minimo = numeros[0];

  for (int i = 1; i < SIZE; ++i) {
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