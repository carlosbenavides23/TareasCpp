/* El programa debe registrar los sueldos de 12 empleados, calcular cuantos
ganan mas de $1000, hallar el sueldo promedio e identificar si algun sueldo es
exactamente $0. */

#include <iomanip> // Se usa para mostrar cantidades con dos decimales.
#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando el usuario se equivoca.

int main() {
  const int numEmpleados = 12;
  double sueldos[numEmpleados];
  // Variables para ir calculando los resultados mientras se leen los sueldos.
  double suma = 0;
  int mayoresMil = 0;
  bool haySueldoCero = false;

  std::cout << "Ingrese los sueldos de los 12 empleados:" << std::endl;

  for (int i = 0; i < numEmpleados; ++i) {
    while (true) {
      std::cout << "Sueldo del empleado " << (i + 1) << ": $";
      std::cin >> sueldos[i];

      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Debe ingresar un numero.\n";
      } else if (sueldos[i] < 0) {
        // Un sueldo negativo no tiene sentido en este ejercicio.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "El sueldo no puede ser negativo.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    suma += sueldos[i];

    if (sueldos[i] > 1000) {
      mayoresMil++;
    }

    // Esta variable solo guarda si aparecio al menos un sueldo igual a 0.
    if (sueldos[i] == 0) {
      haySueldoCero = true;
    }
  }

  double promedio = suma / numEmpleados;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nResumen de sueldos" << std::endl;
  std::cout << "Cantidad que gana mas de $1000: " << mayoresMil << std::endl;
  std::cout << "Sueldo promedio: $" << promedio << std::endl;

  if (haySueldoCero) {
    std::cout << "Advertencia: se detecto al menos un sueldo igual a $0."
              << std::endl;
  } else {
    std::cout << "No se detectaron sueldos iguales a $0." << std::endl;
  }

  return 0;
}
