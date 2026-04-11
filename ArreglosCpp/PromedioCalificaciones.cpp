/* El programa debe solicitar al usuario ocho calificaciones, almacenarlas en un
arreglo y luego mostrar el promedio de las mismas. */

#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando hay errores.

int main() {
  const int numCalificaciones = 8;
  double calificaciones[numCalificaciones];
  // Aqui se va acumulando la suma total para luego calcular el promedio.
  double suma = 0;

  std::cout << "Ingrese " << numCalificaciones
            << " calificaciones:" << std::endl;
  for (int i = 0; i < numCalificaciones; ++i) {
    while (true) {
      std::cout << "Calificación " << (i + 1) << ": ";
      std::cin >> calificaciones[i];

      if (std::cin.fail()) {
        // Si la entrada no es numerica, se limpia para volver a intentar.
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Debe ingresar un numero.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }
    suma += calificaciones[i];
  }

  // El promedio se obtiene dividiendo la suma total entre la cantidad de notas.
  double promedio = suma / numCalificaciones;
  std::cout << "El promedio de las calificaciones es: " << promedio
            << std::endl;

  return 0;
}
