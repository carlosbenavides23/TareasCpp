/* El programa debe sumar los elementos que se encuentran en posiciones pares de
la lista */

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE] = {5, 10, 15, 20, 25, 30, 35, 67, 45, 50};
  int sumaPares = 0;

  for (int i = 0; i < SIZE; ++i) {
    if (i % 2 == 0) {          // Verificar si la posición es par
      sumaPares += numeros[i]; // Sumar el elemento en posición par
    }
  }

  std::cout << "La suma de los elementos en posiciones pares es: " << sumaPares
            << std::endl;

  return 0;
}