/*
 * Created on Sat Sep 14 2024
 *
 * Copyright (c) 2024 UsuiSama
 */

#ifndef _GLIBCXX_CSTRING
#include <cstring>
#endif // !_GLIBCXX_CSTRING

#ifndef __PERSONA_HXX_
#define __PERSONA_HXX__ 1

class Persona
{
private:
    char* name;
    int age;
public:
    Persona(const char* name, int age);
    char* getName() const;
    int getAge() const;
    ~Persona();
};

#endif // !__PERSONA_HXX__