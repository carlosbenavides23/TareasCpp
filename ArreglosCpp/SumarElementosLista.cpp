/* El programa debe solicitar diez numeros al usuario, almacenarlos en un
arreglo y luego mostrar la suma de los elementos del arreglo en total. */

#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando hay errores.

int main() {
  const int numNumeros = 10;
  double numeros[numNumeros];
  // Aqui se ira guardando la suma de todos los numeros.
  double suma = 0;

  std::cout << "Ingrese " << numNumeros << " numeros:" << std::endl;
  for (int i = 0; i < numNumeros; ++i) {
    while (true) {
      std::cout << "Numero " << (i + 1) << ": ";
      std::cin >> numeros[i];

      if (std::cin.fail()) {
        // Si el dato no es numerico, se limpia la entrada para intentarlo otra
        // vez.
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Debe ingresar un numero.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }
    // Cada numero ingresado se agrega a la suma total.
    suma += numeros[i];
  }

  std::cout << "La suma de los numeros ingresados es: " << suma << std::endl;

  return 0;
}
