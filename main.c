#include <stdio.h>
#include <stdlib.h>

/**
 * GreenSheep
 * Sistema de Postulación
 * @Author Felipe Muñoz M.
 */

/**
 * A. No exige experiencia laboral
 * B. Peso cercano a 50kg
 * C. Apto para mujeres
 * D. Personas jóvenes
 * E. Suma de la inversa de la cantidad de años más la edad, menor cargo (1/[AÑOS TRABJADOS] + EDAD)
 * F. Mayor de edad
 * G: Cantidad de lenguajes
 * H:
 * LRV:
 */

int postulaLRV();

int postulaPE();

int postulaPP();

int postulaDVS();

int postulaVAV();

int postulaSAC();

int main()
{
    int opt;
    int result = 0;
    char* cargo;

    do {

        printf("\nPrograma de Postualción GreenSheep \n\n");
        printf("Menú de Selección de Cargo a postular: \n");
        printf("1) Limpia Robots Voladores\n");
        printf("2) Pulidor de Engranajes\n");
        printf("3) Programador de Programadores\n");
        printf("4) Diseñador de Verduras Sintéticas\n");
        printf("5) Vendedor de Androides Verdes\n");
        printf("6) Subgerene de Alimentación de Chivos\n");
        printf("0) Salir\n\n");
        printf("Ingrese una opción: \n");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                // Salir
                break;
            case 1:
                result = postulaLRV();
                cargo = "LRV";
                // TODO
                break;
            case 2:
                // TODO
                break;
            case 3:
                // TODO
                break;
            case 4:
                // TODO
                break;
            case 5:
                // TODO
                break;
            case 6:
                // TODO
                break;
            default:
                printf("Error: Opción Inválida\n");
                break;
        }

        if (result != 0) {
            printf("El postulante %d cumple con un mejor perfil para el cargo %s\n", result, cargo);
            //printf("%s\n", "=Programa Terminado=");
            break;
        }

    } while(opt != 0);
    printf("%s\n", "=Programa Terminado=");

    return 0;
}


int postulaLRV() {
    int resultLRV = 1, i;
    int weight[2];

    for (i = 0; i < 2; i++) {
        printf("Ingrese peso postulante #%d\n", i++);
        scanf("%d", &weight[i]);
    }


    return resultLRV;
}

int postulaPE() {
    return 0;
}

int postulaPP() {
    return 0;
}

int postulaDVS() {
    return 0;
}

int postulaVAV() {
    return 0;
}

int postulaSAC() {
    return 0;
}