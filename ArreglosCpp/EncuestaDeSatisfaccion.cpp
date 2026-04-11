/* El programa debe almacenar las encuestas de satisfaccion de 20 personas que
valoran un servicio del 1 al 5. Despues almacenar las respuestas en una lista,
contar cuantas personas eligieron cada puntuacion, y por ultimo mostrar el
porcentaje de satisfaccion (4 y 5) */

#include <iomanip> // Se usa para mostrar el porcentaje con decimales fijos.
#include <iostream>
#include <limits> // Se usa para limpiar la entrada cuando el usuario escribe algo invalido.

int main() {
  const int numEncuestas = 20;
  int encuestas[numEncuestas];
  // conteo[0] guarda cuantas personas respondieron 1, conteo[1] las de 2, etc.
  int conteo[5] = {0};

  for (int i = 0; i < numEncuestas; ++i) {
    // 'valor' guarda temporalmente la respuesta antes de almacenarla.
    int valor;

    while (true) {
      std::cout << "Ingrese la puntuacion de satisfaccion para la persona "
                << (i + 1) << " (1-5): ";
      std::cin >> valor;

      if (std::cin.fail()) {
        // clear() quita el estado de error para poder seguir usando std::cin.
        std::cin.clear();
        // ignore() descarta lo que quedo escrito en la linea incorrecta.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida: ingrese un numero entero.\n";
      } else if (valor < 1 || valor > 5) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Valor fuera de rango: debe estar entre 1 y 5.\n";
      } else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }

    encuestas[i] = valor;
    // Se resta 1 porque los indices del arreglo van de 0 a 4, no de 1 a 5.
    conteo[valor - 1]++;
  }

  // Se consideran satisfechos los que respondieron 4 o 5.
  int totalSatisfechos = conteo[3] + conteo[4];
  double porcentajeSatisfaccion =
      static_cast<double>(totalSatisfechos) / numEncuestas * 100;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nResumen de resultados\n";

  for (int i = 0; i < 5; ++i) {
    std::cout << "Cantidad que eligio " << (i + 1) << ": " << conteo[i] << '\n';
  }

  std::cout << "Porcentaje de satisfaccion (4 y 5): " << porcentajeSatisfaccion
            << "%\n";

  return 0;
}
