#ifndef ARRAY_H
#define ARRAY_H

class RawArray {
private:
    int* rawArray;
    int size;
    int initialElement;
    int* auxPosition;

public:
    // Constructor
    RawArray(int size, int initialElement);

    // Destructor
    ~RawArray();

    // Función para buscar un valor en el RawArray
    bool BuscarValor(int valorX) const;

    // Otras funciones miembro
    void Init();
    void Print() const;
};

#endif // ARRAY_H