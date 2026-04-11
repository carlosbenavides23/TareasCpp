/* El programa debe buscar una palabra dentro de una lista predefinida. */

#include <iostream>
#include <string> // Se usa para trabajar con palabras o textos.

int main() {
  const int numPalabras = 5;
  // Este arreglo ya tiene palabras guardadas desde el inicio.
  std::string palabras[numPalabras] = {"hola", "mundo", "c++", "programacion",
                                       "arreglo"};
  // Aqui se guardara la palabra que escriba el usuario.
  std::string palabraBuscada;

  std::cout << "Ingrese la palabra a buscar: ";
  std::cin >> palabraBuscada;

  // Se empieza suponiendo que la palabra no esta en la lista.
  bool encontrada = false;
  // Se revisa una por una cada palabra del arreglo.
  for (int i = 0; i < numPalabras; ++i) {
    if (palabras[i] == palabraBuscada) {
      encontrada = true;
      break; // Ya no hace falta seguir recorriendo el arreglo.
    }
  }

  // Segun el valor de 'encontrada', se muestra el resultado final.
  if (encontrada) {
    std::cout << "La palabra '" << palabraBuscada << "' existe en la lista."
              << std::endl;
  } else {
    std::cout << "La palabra '" << palabraBuscada << "' no existe en la lista."
              << std::endl;
  }

  return 0;
}
