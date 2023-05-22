
#include <iostream>


#define MY_NULL 0


int myFunction()
{
    return 0;
}


class myClass 
{
public:
    myClass()
    {
        x = 0;
        y = 0;
    }

    int x;
    int y;
};

class Triangle
{
public:
    Triangle()
    {
        Base = 0.0f;
        Height = 0.0f;
    }

    Triangle(float in_base, float in_height)
    {
        Base = in_base;
        Height = in_height;
    }

    float Base;
    float Height;

    float GetArea()
    {
        return Base * Height / 2.0f;
    }
};



int main()
{

    int myDeclaration;

   
    myDeclaration = 0;

    Triangle example = Triangle(2.0f, 5.0f);
   
    std::cout << example.GetArea() << '\n';

    char nullChar = NULL;
    int nullInt = NULL;
    bool nullBool = MY_NULL;


    int x = 0;

    if (x == NULL)
    {
        std::cout << "sí entré" << '\n';
    }


    char nullCharPtr = NULL;
    char *nullptrCharPtr = nullptr;

    int BigArray[500][500] = {0};

   
    int myIntInstance = 4;
    int* newInt = &myIntInstance;
    *newInt = 5;
    std::cout << *newInt << '\n';
  

    int* Copion1 = newInt, * Copion2 = newInt;

    *newInt = 6;

    int* BigArrayPtr = new int [20000000];

    for (int i = 0; i < 100; i++)
    {
        delete [] BigArrayPtr;
        BigArrayPtr = new int[200000000];

    }
    int myInt = 5;


    int myArray[5] = { 0, 11, 22, 337, 45 };

    for (int i = 0; i < 5; i++)
    {
        std::cout << myArray[i] << '\n';
    }
    
    std::cout << &myInt << '\n';

    int* myAddress = &myInt;

    std::cout << "Dirección de memoria a que apunta MyAddress: " << myAddress << '\n';
    std::cout <<  "Valor de la variable a la que apunta MyAddress: " << *myAddress << '\n';

    std::cout << &myAddress << '\n';

    int** myAddressAddress = &myAddress;


    int* myArrayPtr = &myArray[0];

    for (int i = 0; i < 5; i++)
    {
        std::cout <<"Dirección de memoria de myArray[" <<i<<"] : " << myArrayPtr << '\n';

        std::cout << "Valor del objeto de myArray[" << i << "] : " << *myArrayPtr << '\n';

        ++myArrayPtr;
        ++myArrayPtr;
    }

    return 0;
}