/*
 * Created on Sat Sep 07 2024
 *
 * Copyright (c) 2024 UsuiSama
 */

#include <iostream>

struct Persona
{
    const char *nombre;
    const char *apellido;
    Persona *siguiente;
};

Persona* agregarPersona(const char* nombre, const char* apellido)
{
    Persona* nuevo = new Persona;
    nuevo->nombre = nombre;
    nuevo->apellido = apellido;
    nuevo->siguiente = nullptr;
    return nuevo;
}

Persona* apilar(Persona* pilaPersona, Persona* persona)
{
    persona->siguiente = nullptr;
    if (pilaPersona == nullptr)
        pilaPersona = persona;
    else {
        persona->siguiente = pilaPersona;
        pilaPersona = persona;
    }
    return pilaPersona;
}

Persona* desapilar(Persona* pilaPersona)
{
    if (pilaPersona == nullptr) {
        std::cout << "La pila está vacía." << std::endl;
        return nullptr;
    }
    Persona* personaDesapilada = pilaPersona;
    pilaPersona = pilaPersona->siguiente;
    delete personaDesapilada;
    return pilaPersona;
}

Persona* mostrar(Persona* pilaPersona)
{
    while (pilaPersona != nullptr) {
        std::cout << "Persona: " << pilaPersona->nombre << " " << pilaPersona->apellido << std::endl;
        pilaPersona = desapilar(pilaPersona);
    }
    std::cout << std::endl;
    return pilaPersona;
}

int main()
{
    Persona* pilaPersona = nullptr;

    pilaPersona = apilar(pilaPersona, agregarPersona("Jose", "Usui"));
    pilaPersona = apilar(pilaPersona, agregarPersona("Maria", "Perez"));
    pilaPersona = apilar(pilaPersona, agregarPersona("Pedro", "Garcia"));
    pilaPersona = apilar(pilaPersona, agregarPersona("Zorro", "Benitez"));

    pilaPersona = mostrar(pilaPersona);

    if (pilaPersona == nullptr)
        std::cout << "esta recontra vacio" << std::endl << std::endl;

    std::cout << "Comprobacion:" << std::endl;
    std::cout << "Persona: " << agregarPersona("Jose", "Usui")->nombre << std::endl;
    system("pause");
    return 0;
}