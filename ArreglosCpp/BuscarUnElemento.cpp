/* Dada una lista de palabras, solicita al usuario si existe esa palabra o no en
la lista. */

#include <iostream>
#include <string>

int main() {
  const int SIZE = 5;
  std::string palabras[SIZE] = {"hola", "mundo", "c++", "programacion",
                                "arreglo"};
  std::string palabraBuscada;

  std::cout << "Ingrese la palabra a buscar: ";
  std::cin >> palabraBuscada;

  // Buscar la palabra en el arreglo
  bool encontrada = false;
  for (int i = 0; i < SIZE; ++i) {
    if (palabras[i] == palabraBuscada) {
      encontrada = true;
      break;
    }
  }

  // Mostrar el resultado
  if (encontrada) {
    std::cout << "La palabra '" << palabraBuscada << "' existe en la lista."
              << std::endl;
  } else {
    std::cout << "La palabra '" << palabraBuscada << "' no existe en la lista."
              << std::endl;
  }

  return 0;
}