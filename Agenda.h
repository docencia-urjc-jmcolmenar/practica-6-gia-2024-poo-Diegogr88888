//
// Created by Diego on 19/04/2024.
//

#ifndef PRACTICA_6_GIA_2024_POO_DIEGOGR88888_AGENDA_H
#define PRACTICA_6_GIA_2024_POO_DIEGOGR88888_AGENDA_H

enum TipoContacto{
    FAVORITO,
    CONOCIDO,
    TRABAJO
};

class Persona{
public:
    char nombre[20];
    char apellidos[30];
    int telefono;
    int edad;
    enum TipoContacto tipo;
};


class Agenda {
private:
    int numPersonas = 0;
    Persona personas[200];
public:
    Agenda();
    void listadoPersonas();
    void addPersona();
    void removePersona();
    char *imprimirContacto(enum TipoContacto tipo);
};


#endif //PRACTICA_6_GIA_2024_POO_DIEGOGR88888_AGENDA_H
