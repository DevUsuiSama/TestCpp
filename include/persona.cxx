/*
 * Created on Sat Sep 14 2024
 *
 * Copyright (c) 2024 UsuiSama
 */

#include "persona.hxx"

Persona::Persona(const char* name, int age) : age(age)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

char* Persona::getName() const
{
    return this->name;
}

int Persona::getAge() const
{
    return this->age;
}

Persona::~Persona()
{
    delete[] name;
}

