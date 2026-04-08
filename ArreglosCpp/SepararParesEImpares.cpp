/* El programa debe llenar una lista con diez numeros enteros aleatorios entre 1
y 100, despues separarlos en dos listas, pares e impares */

#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE] = {23, 42, 15, 8, 16, 7, 30, 11, 4, 19};
  int pares[SIZE];
  int impares[SIZE];
  int contadorPares = 0;
  int contadorImpares = 0;

  for (int i = 0; i < SIZE; ++i) {
    if (numeros[i] % 2 == 0) {
      pares[contadorPares] = numeros[i];
      contadorPares++;
    } else {
      impares[contadorImpares] = numeros[i];
      contadorImpares++;
    }
  }

  std::cout << "Números pares:" << std::endl;
  for (int i = 0; i < contadorPares; ++i) {
    std::cout << pares[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Números impares:" << std::endl;
  for (int i = 0; i < contadorImpares; ++i) {
    std::cout << impares[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}