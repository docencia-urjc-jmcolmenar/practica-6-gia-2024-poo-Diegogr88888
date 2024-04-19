//
// Created by Diego on 19/04/2024.
//
#include <iostream>
#include "Agenda.h"
#include <string.h>

char * Agenda::imprimirContacto(enum TipoContacto tipo){
    switch (tipo) {
        case FAVORITO: return "Favorito";
        case CONOCIDO: return "Conocido";
        case TRABAJO: return "Trabajo";
    }
}

Agenda::Agenda(){
    numPersonas = 0;
}
void Agenda::listadoPersonas() {
    for (int i = 0; i < numPersonas; ++i) {
        printf("%i ; %s ; %s ; %i ; %i ; %s",i+1, this->personas[i].nombre, this->personas[i].apellidos,this->personas[i].telefono,
        this->personas[i].edad, imprimirContacto(this->personas[i].tipo));
    }
}

void Agenda::addPersona() {
    Persona paux;
    numPersonas++;
    if (numPersonas<= 200) {
        printf("Dame el nombre de la persona\n");
        scanf("%s", personas[numPersonas - 1].nombre);
        printf("Dame el apellido de la persona\n");
        scanf("%s", personas[numPersonas - 1].apellidos);
        printf("Dame el telefono de la persona\n");
        scanf("%i", &personas[numPersonas - 1].telefono);
        printf("Dame la edad de la persona\n");
        scanf("%i", &personas[numPersonas - 1].edad);
        printf("Dame el tipo de contacto que es la persona\n");
        printf("\t[0] = Favorito\n");
        printf("\t[1] = Conocido\n");
        printf("\t[2] = Trabajo\n");
        scanf("%i", &personas[numPersonas - 1].tipo);
    }else{
        printf("Error al poner una nueva persona");
    }
}

void Agenda::removePersona() {
    int elec, seg;
    printf("Que contacto quieres borrar:\n ");
    listadoPersonas();
    printf("Di el numero de la persona que desea borrar:\n ");
    scanf("%i", &elec);
    printf("¿Estas seguro? \n"
           "\t[1] Si.\n"
           "\t[2] No.\n");
    scanf("%i", &seg);
    if (seg == 1){
        for (int i = (elec - 1); i < numPersonas; ++i) {
            personas[i] = personas[i+1];
        }
    }
    numPersonas--;
    printf("\n");
    listadoPersonas();
    printf("\n");
}