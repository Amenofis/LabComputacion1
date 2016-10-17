#include <stdio.h>
#include <stdlib.h>

/**
 * GreenSheep
 * Sistema de Postulación
 * @Author Felipe Muñoz M.
 *
 * Funciones incompletas: (4), (6)
 */

/**
 * Validación cargo LRV
 * Evalúa *Peso y *Sexo
 */
int postulaLRV();

/**
 * Validación cargo PE
 * Evalúa *Edad y *Experiencia Laboral
 */
int postulaPE();

/**
 * Validación cargo LRV
 * Evalúa *Cantidad lenguajes de programación manejados
 */
int postulaPP();

/**
 * Validación cargo LRV
 * Evalúa *Edad y *Vegetarianismo
 */
int postulaDVS();

/**
 * Validación cargo LRV
 * Evalúa *IMC (Peso/Altura^2)
 */
int postulaVAV();

/**
 * Validación cargo LRV
 * Evalúa *Peso, *Experiencia Laboral, *Ojos Verdes
 */
int postulaSGAC();

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
                printf("\n=Limpia Robots Voladores(LRV)=\n"); 
                printf("**Cargo con reducción en bono de productividad para hombres\n\n");
                result = postulaLRV();
                cargo = "LRV";
                break;
            case 2:
                printf("\n=Pulidor de Engranajes(PE)=\n\n");
                result = postulaPE();
                cargo = "PE";
                break;
            case 3:
                printf("\n=Programador de Programadores(PP)=\n");
                result = postulaPP();
                cargo = "PP";
                break;
            case 4:
                printf("\n=Diseñador de Verduras Sintéticas(DVS)=\n");
                result = postulaDVS();
                cargo = "DVS";
                break;
            case 5:
                printf("\n=Vendedor de Androides Verdes(VAV)=\n");
                result = postulaVAV();
                cargo = "VAV";
                break;
            case 6:
                printf("\n=Subgerente de Administración de Chivos(SGAC)=\n");
                result = postulaSGAC();
                cargo = "SGAC";
                break;
            default:
                printf("Error: Opción Inválida\n");
                break;
        }

        if (result != 0) {
            printf("El postulante %d cumple con un mejor perfil para el cargo %s \n", result, cargo);
        } else {
            printf("Ninguno de los postulantes aplica para el cargo %s \n", cargo);
        }

        free(cargo);
    } while(opt != 0);
    printf("%s\n", "=Programa Terminado=");

    return 0;
}

int postulaLRV() {
    int resultLRV, i;
    int weight[2];
    char sex[2];

    for (i = 0; i < 2; i++) {
        printf("Postulante #%d\n", i+1);
        printf("Ingrese peso(kg):\n");
        scanf("%d", &weight[i]);
        printf("Ingrese sexo (H/M):\n");
        scanf("%s", &sex[i]);
    }

    // Evaluar pesos
    resultLRV = abs(weight[0] - 50) <= abs(weight[1] - 50) ? 1 : 2;

    return resultLRV;
}

int postulaPE() {
    int expe[2], age[2], i;

    for (i = 0; i < 2; i++) {
        printf("Postulante #%d\n", i+1);
        printf("Ingrese edad (años):\n");
        scanf("%d", &age[i]);
        printf("Ingrese experiencia laboral (años):\n");
        scanf("%d", &expe[i]);
        if (age[i] < 18) {
            printf("**Postulante #%d no puede ser menor de edad\n", i+1);
            i--;
        }
    }

    // Cálculo el puntaje de postulación
    int resultPE = (1.0/expe[0]) + age[0] < (1.0/expe[1]) + age[1] ? 1 : 2;
    return resultPE;
}

int postulaPP() {
    int j, k, count[2] = {0, 0};
    char sn;
    char *langs[12] = {"C", "Java", ".Net", "C#", "Objetive-C", "Python", "Ruby", "PHP", "Perl", "Go", "Scala", "Swift"};
    for (j = 0; j < 2; j++) {
        printf("\nPostulante #%d\n", j+1);
        printf("A continuación seleccione (S/N) en los lenguajes que maneja:\n");
        for (k = 0; k <= 11; k++) {
            printf("%s (S/N):", langs[k]);
            scanf(" %c", &sn);
            if (sn == 'S' || sn == 's') {
                count[j]+=1;
            }
        }
    }
    // Evaluar quién maneja más lenguajes
    int resultPP = count[0] > count[1] ? 1 : 2;
    return resultPP;
}

int postulaDVS() {

    int i, age[2], veggie[2];
    char veg;
    for (i = 0; i < 2; i++) {
        printf("Postulante #%d\n", i+1);
        printf("Ingrese edad (años):\n");
        scanf("%d", &age[i]);
        printf("¿Postulante #%d es vegetariano? (S/N)\n", i+1);
        scanf("%c", &veg);
        veggie[i] = veg == 'S' ? 1 : 0;
    }

    // Calcular porcentaje
    int resultDVS = 1;

    return resultDVS;
}

int postulaVAV() {

    int i, weight[2];
    float imc[2], height[2];
    for (i = 0; i < 2; i++) {
        printf("Postulante #%d\n", i+1);
        printf("Ingrese peso (kg):\n");
        scanf("%d", &weight[i]);
        printf("Ingrese altura (ej 1.65):\n");
        scanf("%f", &height[i]);
        imc[i] = weight[i] / (height[i] * height[i]);
    }

    int resultVAV = abs(imc[0] - 17) <= abs(imc[1] - 17) ? 1 : 2;
    return resultVAV;
}

int postulaSGAC() {

    int i, weight[2], expe[2], points[2] = {0, 0};
    char greenEyes;
    for (i = 0; i < 2; i++) {
        printf("Postulante #%d\n", i+1);
        printf("Ingrese peso (kg):\n");
        scanf("%d", &weight[i]);
        points[i] += weight[i] < 80 ? 1 : 0;
        printf("¿Postulante #%d tiene Ojos Verdes? (S/N)\n", i+1);
        scanf("%c", &greenEyes);
        points[i] += greenEyes == 'S' ? 1 : 0;
        printf("Ingrese experiencia laboral (años):\n");
        scanf("%d", &expe[i]);
    }

    printf("Puntaje 1: %d \nPuntaje 2: %d \n", points[0], points[1]);
    return 0;
}