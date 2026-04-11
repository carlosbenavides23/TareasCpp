/* El programa debe eliminar los valores duplicados de una lista. */

#include <iostream>

int main() {
  const int numNumeros = 10;
  int numeros[numNumeros] = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8};
  // Aqui se guardaran solamente los numeros que no esten repetidos.
  int sinDuplicados[numNumeros];
  // Indica cuantos elementos validos tiene el nuevo arreglo.
  int nuevoTamanio = 0;

  std::cout << "Lista original:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  // Se analiza cada elemento del arreglo original.
  for (int i = 0; i < numNumeros; ++i) {
    // Se asume al inicio que el numero todavia no esta repetido.
    bool esDuplicado = false;

    // Solo se compara con las posiciones ya llenas del nuevo arreglo.
    for (int j = 0; j < nuevoTamanio; ++j) {
      if (numeros[i] == sinDuplicados[j]) {
        // Si ya estaba guardado antes, no se debe volver a agregar.
        esDuplicado = true;
        break;
      }
    }
    if (!esDuplicado) {
      // nuevoTamanio tambien indica la siguiente posicion disponible.
      sinDuplicados[nuevoTamanio] = numeros[i];
      nuevoTamanio++;
    }
  }

  std::cout << "Lista sin duplicados:" << std::endl;
  // Solo se muestran las posiciones que realmente fueron llenadas.
  for (int i = 0; i < nuevoTamanio; ++i) {
    std::cout << sinDuplicados[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
