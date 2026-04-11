/* El programa debe llenar una lista con diez numeros enteros aleatorios entre 1
y 100, despues separarlos en dos listas, pares e impares */

#include <cstdlib> // Se usa para generar numeros aleatorios con rand y srand.
#include <ctime> // Se usa para obtener la hora actual y crear una semilla distinta.
#include <iostream>

int main() {
  const int SIZE = 10;
  int numeros[SIZE];
  int pares[SIZE];
  int impares[SIZE];
  // Estos contadores indican cuantas posiciones validas hay en cada arreglo.
  int contadorPares = 0;
  int contadorImpares = 0;

  // La semilla evita que siempre salgan los mismos numeros al iniciar el
  // programa.
  srand(time(nullptr));

  for (int i = 0; i < SIZE; ++i) {
    // rand() % 100 produce valores entre 0 y 99; al sumar 1 queda entre 1 y
    // 100.
    numeros[i] = rand() % 100 + 1;

    if (numeros[i] % 2 == 0) {
      // El contador marca en que posicion guardar el siguiente numero par.
      pares[contadorPares] = numeros[i];
      contadorPares++;
    } else {
      // Lo mismo se hace con los impares.
      impares[contadorImpares] = numeros[i];
      contadorImpares++;
    }
  }

  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros pares:" << std::endl;
  // Solo se muestran los espacios que realmente recibieron numeros pares.
  for (int i = 0; i < contadorPares; ++i) {
    std::cout << pares[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros impares:" << std::endl;
  for (int i = 0; i < contadorImpares; ++i) {
    std::cout << impares[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
