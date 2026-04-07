/* El programa debe leer diez números enteros, almacenarlos en un arreglo y
luego mostrar el contenido del arreglo. */

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE];

  // Leer diez números enteros
  std::cout << "Ingrese " << SIZE << " números enteros:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << "Número " << (i + 1) << ": ";
    std::cin >> numeros[i];
  }

  // Mostrar el contenido del arreglo
  std::cout << "Los números ingresados son:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}