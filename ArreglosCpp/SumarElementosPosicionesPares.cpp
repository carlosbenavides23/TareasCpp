/* El programa debe sumar los elementos que se encuentran en posiciones pares de
la lista */

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE] = {5, 10, 15, 20, 25, 30, 35, 67, 45, 50};
  // Aqui se acumulara la suma de los elementos en posiciones pares.
  int sumaPares = 0;

  std::cout << "Lista de elementos:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  for (int i = 0; i < SIZE; ++i) {
    // En C++, la primera posicion del arreglo es 0, por eso 0, 2, 4...
    // se consideran posiciones pares.
    if (i % 2 == 0) {
      sumaPares += numeros[i];
    }
  }

  std::cout << "La suma de los elementos en posiciones pares es: " << sumaPares
            << std::endl;

  return 0;
}
