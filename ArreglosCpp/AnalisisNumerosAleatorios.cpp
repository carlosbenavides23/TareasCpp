/* El programa genera 30 numeros aleatorios entre 1 y 100, los separa en pares e
impares y muestra la cantidad y la suma de cada grupo. */

#include <cstdlib> // Se usa para generar numeros aleatorios con rand y srand.
#include <ctime> // Se usa para obtener la hora actual y crear una semilla distinta.
#include <iostream>

int main() {
  // Se define la cantidad de numeros que tendra cada arreglo.
  const int numNumeros = 30;
  int numeros[numNumeros];
  int pares[numNumeros];
  int impares[numNumeros];
  // Estos contadores indican cuantas posiciones se han llenado en cada arreglo.
  int contadorPares = 0;
  int contadorImpares = 0;
  // Estas variables acumulan la suma de los numeros pares e impares.
  int sumaPares = 0;
  int sumaImpares = 0;

  // La semilla hace que la secuencia aleatoria cambie en cada ejecucion.
  srand(time(nullptr));

  for (int i = 0; i < numNumeros; ++i) {
    // rand() % 100 da valores entre 0 y 99; al sumar 1 queda entre 1 y 100.
    numeros[i] = rand() % 100 + 1;

    // Si el residuo al dividir entre 2 es 0, el numero es par.
    if (numeros[i] % 2 == 0) {
      // contadorPares indica la siguiente posicion disponible en el arreglo.
      pares[contadorPares] = numeros[i];
      sumaPares += numeros[i];
      contadorPares++;
    } else {
      // contadorImpares cumple la misma funcion para el arreglo de impares.
      impares[contadorImpares] = numeros[i];
      sumaImpares += numeros[i];
      contadorImpares++;
    }
  }

  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  std::cout << "Numeros pares:" << std::endl;
  // Solo se recorren las posiciones que realmente se llenaron.
  for (int i = 0; i < contadorPares; ++i) {
    std::cout << pares[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Cantidad de pares: " << contadorPares << std::endl;
  std::cout << "Suma de pares: " << sumaPares << std::endl << std::endl;

  std::cout << "Numeros impares:" << std::endl;
  // Aqui pasa lo mismo: solo se muestran las posiciones validas.
  for (int i = 0; i < contadorImpares; ++i) {
    std::cout << impares[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Cantidad de impares: " << contadorImpares << std::endl;
  std::cout << "Suma de impares: " << sumaImpares << std::endl;

  return 0;
}
