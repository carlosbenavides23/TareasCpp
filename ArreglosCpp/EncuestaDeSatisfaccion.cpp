/* El programa debe alamcenar las encuestas de satisfaccion de 20 personas que
valoran un servicio del 1 al 5. Despues almacenar las respuestas en una lista,
contar cuantas personas eligieron cada puntuacion, y por ultimo mostrar el
porcentaje de satisfaccion (4 y 5)*/

#include <iostream>
#include <limits>

int main() {
  const int SIZE = 20;
  int encuestas[SIZE];
  int conteo[5] = {0}; // Para contar las respuestas del 1 al 5

  for (int i = 0; i < SIZE; ++i) {
    int valor;
    while (true) {
      std::cout << "Ingrese la puntuación de satisfacción para la persona "
                << (i + 1) << " (1-5): ";
      std::cin >> valor;

      if (std::cin.fail()) {
        std::cin.clear(); // limpiar el estado de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // descartar resto de la línea
        std::cout << "Entrada inválida: ingrese un número entero.\n";
      } else if (valor < 1 || valor > 5) {
        std::cout << "Valor fuera de rango: debe estar entre 1 y 5.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n'); // descartar resto de la línea
        break;
      }
    }

    encuestas[i] = valor;
    conteo[valor -
           1]++; // Incrementar el conteo para la puntuación correspondiente
  }

  int totalSatisfechos = conteo[3] + conteo[4]; // Contar respuestas de 4 y 5
  double porcentajeSatisfaccion =
      static_cast<double>(totalSatisfechos) / SIZE * 100;

  std::cout << "Cantidad que eligió 1: " << conteo[0] << std::endl;
  std::cout << "Cantidad que eligió 2: " << conteo[1] << std::endl;
  std::cout << "Cantidad que eligió 3: " << conteo[2] << std::endl;
  std::cout << "Cantidad que eligió 4: " << conteo[3] << std::endl;
  std::cout << "Cantidad que eligió 5: " << conteo[4] << std::endl;
  std::cout << "Porcentaje de satisfacción (4 y 5): " << porcentajeSatisfaccion
            << "%" << std::endl;

  return 0;
}
