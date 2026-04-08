/* Dada una lista con valores repetidos, el programa debe crear una nueva lista
 * sin duplicados.*/

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8};
  int sinDuplicados[SIZE];
  int nuevoTamaño = 0;

  for (int i = 0; i < SIZE; ++i) {
    bool esDuplicado = false;
    for (int j = 0; j < nuevoTamaño; ++j) {
      if (numeros[i] == sinDuplicados[j]) {
        esDuplicado = true;
        break;
      }
    }
    if (!esDuplicado) {
      sinDuplicados[nuevoTamaño] = numeros[i];
      nuevoTamaño++;
    }
  }

  std::cout << "Lista sin duplicados:" << std::endl;
  for (int i = 0; i < nuevoTamaño; ++i) {
    std::cout << sinDuplicados[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}