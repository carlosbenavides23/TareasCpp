/* El programa debe pedir 10 numeros al usuario, guardarlos en una lista y luego
 imprimirlos en orden inverso */

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE];

  // Solicitar al usuario que ingrese 10 números
  std::cout << "Ingrese " << SIZE << " números enteros:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << "Número " << (i + 1) << ": ";
    std::cin >> numeros[i];
  }

  // Imprimir los números en orden inverso
  std::cout << "Los números en orden inverso son:" << std::endl;
  for (int i = SIZE - 1; i >= 0; --i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}