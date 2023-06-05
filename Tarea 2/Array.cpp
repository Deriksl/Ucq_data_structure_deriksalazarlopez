#include "array.h"
#include <iostream>

// Constructor
RawArray::RawArray(int size, int initialElement) {
    this->size = size;
    this->initialElement = initialElement;
    rawArray = new int[size];

    Init();
}

// Destructor
RawArray::~RawArray() {
    delete[] rawArray;
}

// Función para buscar un valor en el RawArray
bool RawArray::BuscarValor(int valorX) const {
    for (int i = 0; i < size; i++) {
        if (rawArray[i] == valorX) {
            return true;
        }
    }

    return false;
}

// Otras funciones miembro
void RawArray::Init() {
    for (int i = 0; i < size; i++) {
        rawArray[i] = initialElement + i;
    }
}

void RawArray::Print() const {
    for (int i = 0; i < size; i++) {
        std::cout << rawArray[i] << " ";
    }
    std::cout << std::endl;
}