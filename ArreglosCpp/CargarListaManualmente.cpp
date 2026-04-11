/* El programa debe leer diez numeros enteros, almacenarlos en un arreglo y
luego mostrar el contenido del arreglo. */

#include <iostream>
#include <sstream> // Se usa para convertir texto a numero y validar la entrada.
#include <string>  // Se usa para manejar texto y leer lineas completas.

int main() {
  const int numNumeros = 10;
  int numeros[numNumeros];
  // Aqui se guarda temporalmente lo que el usuario escribe.
  std::string entrada;

  std::cout << "Ingrese " << numNumeros << " numeros enteros:" << std::endl;

  for (int i = 0; i < numNumeros; ++i) {
    while (true) {
      std::cout << "Numero " << (i + 1) << ": ";
      // Se lee como texto para poder validar mejor la entrada.
      std::getline(std::cin, entrada);

      // stringstream permite intentar leer el texto como si fuera un numero.
      std::stringstream ss(entrada);
      int valor;
      char sobrante;

      // Si falla esta conversion, significa que no habia un entero valido.
      if (!(ss >> valor)) {
        std::cout << "Entrada invalida. Debe ingresar un numero entero.\n";
      } else if (ss >> sobrante) {
        // Si queda algo por leer, hubo caracteres extra como letras o
        // decimales.
        std::cout << "Entrada invalida. No se permiten decimales ni caracteres "
                     "extra.\n";
      } else {
        // Solo si la entrada es correcta se guarda en el arreglo.
        numeros[i] = valor;
        break;
      }
    }
  }

  std::cout << "Los numeros ingresados son:" << std::endl;
  // Este recorrido muestra los valores almacenados en el arreglo.
  for (int i = 0; i < numNumeros; ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
