#include <iostream>
#include "Cola.h"

int main()
{
    Elemento* uno = new Elemento("Uno");
    Elemento* dos = new Elemento("Dos");
    Elemento* tres = new Elemento("Tres");
    Elemento* cuatro = new Elemento("Cuatro");
    Cola* cola = new Cola();
    cola->Agregar(uno);
    cola->Agregar(dos);
    cola->Agregar(tres);
    cola->Agregar(cuatro);

    Elemento* i = cola->GetPrimer();

    while(i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        cola->Extraer();
        i = cola->GetPrimer();
    }

    delete cola;
    return 0;
}