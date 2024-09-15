/*
 * Created on Sat Sep 14 2024
 *
 * Copyright (c) 2024 UsuiSama
 */

#ifndef __ELIMINAR_OBJETO_HXX__
#define __ELIMINAR_OBJETO_HXX__ 1

#define eliminar_objeto(a) \
    delete(a);             \
    a = nullptr;

#endif // !__ELIMINAR_OBJETO_HXX__