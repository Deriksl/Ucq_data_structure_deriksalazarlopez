#include "array.h"
#include <iostream>

int main() {
    // Crear una instancia de la clase RawArray
    RawArray myArray(5, 4);

    // Mostrar los elementos del arreglo
    myArray.Print();

    // Valor a buscar
    int valorBuscado = 6;

    // Llamar a la función BuscarValor y mostrar el resultado
    bool encontrado = myArray.BuscarValor(valorBuscado);
    if (encontrado) {
        std::cout << "El valor " << valorBuscado << " ha sido encontrado." << std::endl;
    } else {
        std::cout << "El valor " << valorBuscado << " no ha sido encontrado." << std::endl;
    }

    return 0;
}