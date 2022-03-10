#pragma once

#include "Elemento.h"

class Cola
{
public:
    Cola();
    ~Cola();
    void Agregar(Elemento* elemento);
    Elemento* GetPrimer();
    void Extraer();

private:
    Elemento* _primer;
    Elemento* _ultimo;
};