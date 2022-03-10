#pragma once

#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    ~Elemento();
    void SetSiguiente(Elemento* elemento);
    Elemento* GetSiguiente();
    std::string GetNombre();

private:
    std::string _nombre;
    Elemento *_siguiente;
};