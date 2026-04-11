/* El programa debe solicitar las calificaciones de diez estudiantes con el uso
de validaciones (0-100). Luego mostrar el promedio, la calificacion mas alta, la
mas baja, y cuantos aprobaron (>=70) */

#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando hay errores.

int main() {
  const int numEstudiantes = 10;
  int calificaciones[numEstudiantes];
  // Estas variables se usaran para calcular las estadisticas finales.
  int suma = 0;
  int maximo = 0;
  int minimo = 100;
  int aprobados = 0;

  for (int i = 0; i < numEstudiantes; ++i) {
    int valor;
    while (true) {
      std::cout << "Ingrese la calificación del estudiante " << (i + 1)
                << " (0-100): ";
      std::cin >> valor;

      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada inválida: ingrese un número entero.\n";
      } else if (valor < 0 || valor > 100) {
        // No se aceptan notas menores que 0 ni mayores que 100.
        std::cout << "Valor fuera de rango: debe estar entre 0 y 100.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    calificaciones[i] = valor;
    suma += valor;

    // En el mismo recorrido se actualizan todas las estadisticas.
    if (valor > maximo)
      maximo = valor;
    if (valor < minimo)
      minimo = valor;
    // Se considera aprobado al estudiante con nota mayor o igual a 70.
    if (valor >= 70)
      aprobados++;
  }

  // static_cast<double> evita una division entera y permite obtener decimales.
  double promedio = static_cast<double>(suma) / numEstudiantes;
  std::cout << "Promedio: " << promedio << std::endl;
  std::cout << "Calificación más alta: " << maximo << std::endl;
  std::cout << "Calificación más baja: " << minimo << std::endl;
  std::cout << "Cantidad de estudiantes aprobados: " << aprobados << std::endl;

  return 0;
}
