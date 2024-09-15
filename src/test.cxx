/*
 * Created on Sat Sep 07 2024
 *
 * Copyright (c) 2024 UsuiSama
 */

#include "stdafx.hxx"

int main()
{
    const Persona *persona = new Persona("John", 12);
    std::cout << "Nombre: " << persona->getName() << "\n";
    std::cout << "Edad: " << persona->getAge() << "\n\n";
    eliminar_objeto(persona);
    if (persona == nullptr)
        std::cout << "El objeto persona dejo de existir para siempre...\n";
    system("pause");
    return 0;
}