#include <iostream>
#include "Agenda.h"

int main() {
    int opcion;

    Agenda agenda = Agenda();


    do {
        printf("\n --- MENU --- \n");
        printf("1. Listado de personas\n");
        printf("2. Nueva persona\n");
        printf("3. Borrar persona\n");
        printf("0. SALIR\n");

        printf("\nElija una opcion: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                agenda.listadoPersonas();
                break;
            case 2:
                agenda.addPersona();
                break;
            case 3:
                agenda.removePersona();
                break;
            case 0:
                printf("\nAdios\n");
                break;
            default:
                printf("\nOpcion incorrecta\n");
        }
    } while (opcion != 0);

    return 0;
}
