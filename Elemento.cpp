#include "Elemento.h"
#include <iostream>

Elemento::Elemento(std::string nombre) : _nombre(nombre), _siguiente(nullptr)
{
}

void Elemento::SetSiguiente(Elemento* elemento)
{
    _siguiente = elemento;
}


Elemento* Elemento::GetSiguiente()
{
    return _siguiente;
}

std::string Elemento::GetNombre()
{
    return _nombre;
}

Elemento::~Elemento()
{
    std::cout << "Destruyendo el elemento " << _nombre << std::endl;
}