#include "Cola.h"
#include <iostream>

Cola::Cola() : _primer(nullptr), _ultimo(nullptr)
{
}

void Cola::Agregar(Elemento *elemento)
{
    if (_primer == nullptr) // Si la cola está vacía
    {
        _primer = elemento;
        _ultimo = elemento;
    }
    else
    {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }
}

Elemento *Cola::GetPrimer()
{
    return _primer;
}

void Cola::Extraer()
{
    Elemento *temporal = _primer;
    _primer = _primer->GetSiguiente();
    delete temporal;
}

Cola::~Cola()
{
    std::cout << "Destruyendo cola" << std::endl;
    Elemento *i = GetPrimer();

    while (i != nullptr)
    {
        Extraer();
        i = GetPrimer();
    }
}
