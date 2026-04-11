/* El programa debe ingresar los montos de venta diaria, calcular el total y el
promedio semanal y mostrar que dia tuvo mayor y menor venta */

#include <iomanip> // Se usa para mostrar cantidades con dos decimales.
#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando el usuario escribe algo invalido.

int main() {
  const int diasSemana = 7;
  double ventas[diasSemana];
  // Aqui se acumulara la suma total de las ventas de la semana.
  double total = 0;
  // Se usan los extremos posibles del tipo double para asegurar que la primera
  // venta ingresada actualice ambos valores.
  double maximo = std::numeric_limits<double>::lowest();
  double minimo = std::numeric_limits<double>::max();
  int diaMaximo = 0;
  int diaMinimo = 0;

  std::cout << "Registro de ventas diarias" << std::endl;
  std::cout << "Ingrese las ventas de los 7 dias en cordobas (C$)."
            << std::endl;
  std::cout << "No se permiten letras ni montos negativos." << std::endl
            << std::endl;

  for (int i = 0; i < diasSemana; ++i) {
    while (true) {
      std::cout << "Ingrese el monto de venta del dia " << (i + 1)
                << " en C$: ";
      std::cin >> ventas[i];

      if (std::cin.fail()) {
        // Si la entrada no es un numero, hay que limpiar el error y el buffer.
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: entrada invalida. Debe ingresar un numero."
                  << std::endl;
      } else if (ventas[i] < 0) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: el monto no puede ser negativo. Intente de nuevo."
                  << std::endl;
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    total += ventas[i];

    // Si la venta actual es mayor que el maximo guardado, se actualizan ambos.
    if (ventas[i] > maximo) {
      maximo = ventas[i];
      diaMaximo = i + 1;
    }

    // Si la venta actual es menor que el minimo guardado, tambien se actualiza.
    if (ventas[i] < minimo) {
      minimo = ventas[i];
      diaMinimo = i + 1;
    }
  }

  // El promedio diario se obtiene dividiendo el total entre los 7 dias.
  double promedio = total / diasSemana;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << std::endl;
  std::cout << "Resumen de ventas" << std::endl;

  std::cout << "Total de ventas semanales: C$ " << total << std::endl;
  std::cout << "Promedio de ventas diarias: C$ " << promedio << std::endl;

  std::cout << "Dia con mayor venta: Dia " << diaMaximo << " con C$ " << maximo
            << std::endl;
  std::cout << "Dia con menor venta: Dia " << diaMinimo << " con C$ " << minimo
            << std::endl;

  return 0;
}
