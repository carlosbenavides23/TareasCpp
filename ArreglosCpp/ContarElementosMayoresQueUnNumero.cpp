/* El programa debe contar cuantos elementos de una lista son mayores que 50. */

#include <iostream>

int main() {
  // El arreglo ya viene cargado con 10 numeros.
  int numeros[10] = {45, 60, 30, 75, 67, 80, 10, 90, 50, 65};
  // Empieza en 0 porque aun no se ha contado ningun elemento.
  int contador = 0;

  std::cout << "Lista de numeros:" << std::endl;
  // Se recorre el arreglo completo para revisar cada elemento.
  for (int i = 0; i < 10; i++) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl << std::endl;

  for (int i = 0; i < 10; i++) {
    // Solo aumenta el contador cuando el numero cumple la condicion.
    if (numeros[i] > 50) {
      contador++;
    }
  }

  std::cout << "Cantidad de elementos mayores que 50: " << contador
            << std::endl;

  return 0;
}
